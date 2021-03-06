# Copyright (c) 2018 The Open-Transactions developers
# This Source Code Form is subject to the terms of the Mozilla Public
# License, v. 2.0. If a copy of the MPL was not distributed with this
# file, You can obtain one at http://mozilla.org/MPL/2.0/.

set(MODULE_NAME generated)

set(PROTO_SOURCES
    ${CMAKE_CURRENT_SOURCE_DIR}/AcceptPendingPayment.proto
    ${CMAKE_CURRENT_SOURCE_DIR}/AccountData.proto
    ${CMAKE_CURRENT_SOURCE_DIR}/AccountEvent.proto
    ${CMAKE_CURRENT_SOURCE_DIR}/AddClaim.proto
    ${CMAKE_CURRENT_SOURCE_DIR}/AddContact.proto
    ${CMAKE_CURRENT_SOURCE_DIR}/APIArgument.proto
    ${CMAKE_CURRENT_SOURCE_DIR}/AsymmetricKey.proto
    ${CMAKE_CURRENT_SOURCE_DIR}/Bailment.proto
    ${CMAKE_CURRENT_SOURCE_DIR}/BailmentReply.proto
    ${CMAKE_CURRENT_SOURCE_DIR}/BasketParams.proto
    ${CMAKE_CURRENT_SOURCE_DIR}/BasketItem.proto
    ${CMAKE_CURRENT_SOURCE_DIR}/Bip44Account.proto
    ${CMAKE_CURRENT_SOURCE_DIR}/Bip44Address.proto
    ${CMAKE_CURRENT_SOURCE_DIR}/Bip47Address.proto
    ${CMAKE_CURRENT_SOURCE_DIR}/Bip47Channel.proto
    ${CMAKE_CURRENT_SOURCE_DIR}/Bip47Direction.proto
    ${CMAKE_CURRENT_SOURCE_DIR}/BlockchainTransaction.proto
    ${CMAKE_CURRENT_SOURCE_DIR}/BlockchainTransactionInput.proto
    ${CMAKE_CURRENT_SOURCE_DIR}/BlockchainTransactionOutput.proto
    ${CMAKE_CURRENT_SOURCE_DIR}/ChildCredentialParameters.proto
    ${CMAKE_CURRENT_SOURCE_DIR}/Ciphertext.proto
    ${CMAKE_CURRENT_SOURCE_DIR}/Claim.proto
    ${CMAKE_CURRENT_SOURCE_DIR}/ClientContext.proto
    ${CMAKE_CURRENT_SOURCE_DIR}/ConnectionInfo.proto
    ${CMAKE_CURRENT_SOURCE_DIR}/ConnectionInfoReply.proto
    ${CMAKE_CURRENT_SOURCE_DIR}/ConsensusEnums.proto
    ${CMAKE_CURRENT_SOURCE_DIR}/Contact.proto
    ${CMAKE_CURRENT_SOURCE_DIR}/ContactData.proto
    ${CMAKE_CURRENT_SOURCE_DIR}/ContactEnums.proto
    ${CMAKE_CURRENT_SOURCE_DIR}/ContactEvent.proto
    ${CMAKE_CURRENT_SOURCE_DIR}/ContactItem.proto
    ${CMAKE_CURRENT_SOURCE_DIR}/ContactSection.proto
    ${CMAKE_CURRENT_SOURCE_DIR}/Context.proto
    ${CMAKE_CURRENT_SOURCE_DIR}/ContractEnums.proto
    ${CMAKE_CURRENT_SOURCE_DIR}/CreateInstrumentDefinition.proto
    ${CMAKE_CURRENT_SOURCE_DIR}/CreateNym.proto
    ${CMAKE_CURRENT_SOURCE_DIR}/Credential.proto
    ${CMAKE_CURRENT_SOURCE_DIR}/CredentialIndex.proto
    ${CMAKE_CURRENT_SOURCE_DIR}/CredentialSet.proto
    ${CMAKE_CURRENT_SOURCE_DIR}/CurrencyParams.proto
    ${CMAKE_CURRENT_SOURCE_DIR}/Enums.proto
    ${CMAKE_CURRENT_SOURCE_DIR}/Envelope.proto
    ${CMAKE_CURRENT_SOURCE_DIR}/EquityParams.proto
    ${CMAKE_CURRENT_SOURCE_DIR}/Faucet.proto
    ${CMAKE_CURRENT_SOURCE_DIR}/GetWorkflow.proto
    ${CMAKE_CURRENT_SOURCE_DIR}/HDPath.proto
    ${CMAKE_CURRENT_SOURCE_DIR}/HDSeed.proto
    ${CMAKE_CURRENT_SOURCE_DIR}/InstrumentRevision.proto
    ${CMAKE_CURRENT_SOURCE_DIR}/Issuer.proto
    ${CMAKE_CURRENT_SOURCE_DIR}/KeyCredential.proto
    ${CMAKE_CURRENT_SOURCE_DIR}/ListenAddress.proto
    ${CMAKE_CURRENT_SOURCE_DIR}/MasterCredentialParameters.proto
    ${CMAKE_CURRENT_SOURCE_DIR}/MoveFunds.proto
    ${CMAKE_CURRENT_SOURCE_DIR}/NoticeAcknowledgement.proto
    ${CMAKE_CURRENT_SOURCE_DIR}/NymIDSource.proto
    ${CMAKE_CURRENT_SOURCE_DIR}/OTXEnums.proto
    ${CMAKE_CURRENT_SOURCE_DIR}/OTXPush.proto
    ${CMAKE_CURRENT_SOURCE_DIR}/OutBailment.proto
    ${CMAKE_CURRENT_SOURCE_DIR}/OutBailmentReply.proto
    ${CMAKE_CURRENT_SOURCE_DIR}/PairEvent.proto
    ${CMAKE_CURRENT_SOURCE_DIR}/PaymentCode.proto
    ${CMAKE_CURRENT_SOURCE_DIR}/PaymentEvent.proto
    ${CMAKE_CURRENT_SOURCE_DIR}/PaymentWorkflow.proto
    ${CMAKE_CURRENT_SOURCE_DIR}/PaymentWorkflowEnums.proto
    ${CMAKE_CURRENT_SOURCE_DIR}/PeerEnums.proto
    ${CMAKE_CURRENT_SOURCE_DIR}/PeerObject.proto
    ${CMAKE_CURRENT_SOURCE_DIR}/PeerReply.proto
    ${CMAKE_CURRENT_SOURCE_DIR}/PeerRequest.proto
    ${CMAKE_CURRENT_SOURCE_DIR}/PeerRequestHistory.proto
    ${CMAKE_CURRENT_SOURCE_DIR}/PeerRequestWorkflow.proto
    ${CMAKE_CURRENT_SOURCE_DIR}/PendingBailment.proto
    ${CMAKE_CURRENT_SOURCE_DIR}/RPCCommand.proto
    ${CMAKE_CURRENT_SOURCE_DIR}/RPCPush.proto
    ${CMAKE_CURRENT_SOURCE_DIR}/RPCResponse.proto
    ${CMAKE_CURRENT_SOURCE_DIR}/RPCStatus.proto
    ${CMAKE_CURRENT_SOURCE_DIR}/RPCTask.proto
    ${CMAKE_CURRENT_SOURCE_DIR}/RPCEnums.proto
    ${CMAKE_CURRENT_SOURCE_DIR}/Seed.proto
    ${CMAKE_CURRENT_SOURCE_DIR}/SendMessage.proto
    ${CMAKE_CURRENT_SOURCE_DIR}/SendPayment.proto
    ${CMAKE_CURRENT_SOURCE_DIR}/ServerContext.proto
    ${CMAKE_CURRENT_SOURCE_DIR}/ServerContract.proto
    ${CMAKE_CURRENT_SOURCE_DIR}/ServerReply.proto
    ${CMAKE_CURRENT_SOURCE_DIR}/ServerRequest.proto
    ${CMAKE_CURRENT_SOURCE_DIR}/SessionData.proto
    ${CMAKE_CURRENT_SOURCE_DIR}/Signature.proto
    ${CMAKE_CURRENT_SOURCE_DIR}/SourceProof.proto
    ${CMAKE_CURRENT_SOURCE_DIR}/StorageAccountIndex.proto
    ${CMAKE_CURRENT_SOURCE_DIR}/StorageAccounts.proto
    ${CMAKE_CURRENT_SOURCE_DIR}/StorageBip47AddressIndex.proto
    ${CMAKE_CURRENT_SOURCE_DIR}/StorageBip47ChannelList.proto
    ${CMAKE_CURRENT_SOURCE_DIR}/StorageBip47Contexts.proto
    ${CMAKE_CURRENT_SOURCE_DIR}/StorageBip47NymAddressIndex.proto
    ${CMAKE_CURRENT_SOURCE_DIR}/StorageBlockchainAccountList.proto
    ${CMAKE_CURRENT_SOURCE_DIR}/StorageBlockchainTransactions.proto
    ${CMAKE_CURRENT_SOURCE_DIR}/StorageContactAddressIndex.proto
    ${CMAKE_CURRENT_SOURCE_DIR}/StorageContactNymIndex.proto
    ${CMAKE_CURRENT_SOURCE_DIR}/StorageContacts.proto
    ${CMAKE_CURRENT_SOURCE_DIR}/StorageCredentials.proto
    ${CMAKE_CURRENT_SOURCE_DIR}/StorageEnums.proto
    ${CMAKE_CURRENT_SOURCE_DIR}/StorageIDList.proto
    ${CMAKE_CURRENT_SOURCE_DIR}/StorageItemHash.proto
    ${CMAKE_CURRENT_SOURCE_DIR}/StorageItems.proto
    ${CMAKE_CURRENT_SOURCE_DIR}/StorageIssuers.proto
    ${CMAKE_CURRENT_SOURCE_DIR}/StorageNym.proto
    ${CMAKE_CURRENT_SOURCE_DIR}/StorageNymList.proto
    ${CMAKE_CURRENT_SOURCE_DIR}/StoragePaymentWorkflows.proto
    ${CMAKE_CURRENT_SOURCE_DIR}/StorageRoot.proto
    ${CMAKE_CURRENT_SOURCE_DIR}/StorageSeeds.proto
    ${CMAKE_CURRENT_SOURCE_DIR}/StorageServers.proto
    ${CMAKE_CURRENT_SOURCE_DIR}/StorageThread.proto
    ${CMAKE_CURRENT_SOURCE_DIR}/StorageThreadItem.proto
    ${CMAKE_CURRENT_SOURCE_DIR}/StorageUnits.proto
    ${CMAKE_CURRENT_SOURCE_DIR}/StorageWorkflowIndex.proto
    ${CMAKE_CURRENT_SOURCE_DIR}/StorageWorkflowType.proto
    ${CMAKE_CURRENT_SOURCE_DIR}/StoreSecret.proto
    ${CMAKE_CURRENT_SOURCE_DIR}/SymmetricKey.proto
    ${CMAKE_CURRENT_SOURCE_DIR}/TaskComplete.proto
    ${CMAKE_CURRENT_SOURCE_DIR}/TransactionData.proto
    ${CMAKE_CURRENT_SOURCE_DIR}/UnitAccountMap.proto
    ${CMAKE_CURRENT_SOURCE_DIR}/UnitDefinition.proto
    ${CMAKE_CURRENT_SOURCE_DIR}/Verification.proto
    ${CMAKE_CURRENT_SOURCE_DIR}/VerificationGroup.proto
    ${CMAKE_CURRENT_SOURCE_DIR}/VerificationIdentity.proto
    ${CMAKE_CURRENT_SOURCE_DIR}/VerificationOffer.proto
    ${CMAKE_CURRENT_SOURCE_DIR}/VerificationSet.proto
    ${CMAKE_CURRENT_SOURCE_DIR}/VerifyClaim.proto
    ${CMAKE_CURRENT_SOURCE_DIR}/ZMQEnums.proto
)

PROTOBUF_GENERATE_CPP(
    PROTO_SRC
    PROTO_HEADER
    ${PROTO_SOURCES}
)

add_library(${MODULE_NAME} OBJECT
  ${PROTO_SRC}
  ${PROTO_HEADER}
)

target_compile_options(${MODULE_NAME} PRIVATE -Wno-error -Wno-unused-macros -Wno-undef -Wno-switch-default)

if (PYTHON OR PYTHON2 OR PYTHON3)
    # why doesn't this work?  For some reason it doesn't actually generate .py files'
    #protobuf_generate_python(
        #PROTO_PYTHON
        #${PROTO_SOURCES}
    #)

    include_directories(${PYTHON_INCLUDE_PATH})

    include(ExternalProject)

    set(WRAPPER_TYPE python)
    set(WRAPPER_DIR ${CMAKE_CURRENT_BINARY_DIR}/opentxsproto)
    set(STAGING_DIR ${CMAKE_CURRENT_BINARY_DIR}/${WRAPPER_TYPE}_stage)
    set(SITE_PACKAGES_PATH ${STAGING_DIR}/lib/python${PYTHON_VERSION_MAJOR}.${PYTHON_VERSION_MINOR}/site-packages)

    ExternalProject_Add(
        proto-${WRAPPER_TYPE}
        EXCLUDE_FROM_ALL 0
        DOWNLOAD_COMMAND mkdir -p ${WRAPPER_DIR}
        PATCH_COMMAND cp ${CMAKE_CURRENT_SOURCE_DIR}/setup.py ${CMAKE_CURRENT_BINARY_DIR}
        CONFIGURE_COMMAND touch ${WRAPPER_DIR}/__init__.py
        BINARY_DIR ${CMAKE_CURRENT_BINARY_DIR}
        BUILD_COMMAND protoc --proto_path=${CMAKE_CURRENT_SOURCE_DIR} --${WRAPPER_TYPE}_out=${WRAPPER_DIR} ${PROTO_SOURCES}
        BUILD_ALWAYS 1

        INSTALL_COMMAND export PYTHONPATH=${SITE_PACKAGES_PATH} && mkdir -p ${SITE_PACKAGES_PATH} && ${PYTHON_EXECUTABLE} ${CMAKE_CURRENT_BINARY_DIR}/setup.py install --prefix=${STAGING_DIR} sdist --dist-dir=${PYTHON_DIST} bdist_wheel --dist-dir=${PYTHON_DIST})
    install(DIRECTORY ${STAGING_DIR}/ DESTINATION ${CMAKE_INSTALL_PREFIX} )
endif()

if (JAVASCRIPT)
    include(ExternalProject)

    set(WRAPPER_TYPE js)
    set(WRAPPER_DIR ${CMAKE_CURRENT_BINARY_DIR}/${WRAPPER_TYPE})

    ExternalProject_Add(
        proto-${WRAPPER_TYPE}
        EXCLUDE_FROM_ALL 0
        DOWNLOAD_COMMAND mkdir -p ${WRAPPER_DIR}
        CONFIGURE_COMMAND true
        BINARY_DIR ${CMAKE_CURRENT_BINARY_DIR}
        BUILD_COMMAND protoc --proto_path=${CMAKE_CURRENT_SOURCE_DIR} --${WRAPPER_TYPE}_out=${WRAPPER_DIR} ${PROTO_SOURCES}
        BUILD_ALWAYS 1
        INSTALL_COMMAND true)

    install(DIRECTORY ${WRAPPER_DIR} DESTINATION share/${MODULE_NAME} )
endif()

if (JAVA)
    include(ExternalProject)

    set(WRAPPER_TYPE java)
    set(WRAPPER_DIR ${CMAKE_CURRENT_BINARY_DIR}/${WRAPPER_TYPE})

    ExternalProject_Add(
        proto-${WRAPPER_TYPE}
        EXCLUDE_FROM_ALL 0
        DOWNLOAD_COMMAND mkdir -p ${WRAPPER_DIR}
        CONFIGURE_COMMAND true
        BINARY_DIR ${CMAKE_CURRENT_BINARY_DIR}
        BUILD_COMMAND protoc --proto_path=${CMAKE_CURRENT_SOURCE_DIR} --${WRAPPER_TYPE}_out=${WRAPPER_DIR} ${PROTO_SOURCES}
        BUILD_ALWAYS 1
        INSTALL_COMMAND true)

    install(DIRECTORY ${WRAPPER_DIR} DESTINATION share/${MODULE_NAME} )
endif()
