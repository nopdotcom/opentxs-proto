# Copyright (c) 2018 The Open-Transactions developers
# This Source Code Form is subject to the terms of the Mozilla Public
# License, v. 2.0. If a copy of the MPL was not distributed with this
# file, You can obtain one at http://mozilla.org/MPL/2.0/.

#!/usr/bin/env python

import glob
import os

from setuptools import setup

for f in glob.glob('opentxsproto/*_pb2.py'):
    newf = f.replace("_pb2", "")
    os.rename(f, newf)

setup(name='opentxsproto',
      version='0.1',
      description='Open-Transactions Canonical Protbuf Definition Library',
      author='Justus Ranvier',
      author_email='justus@opentransactions.org',
      url='https://github.com/Open-Transactions/opentxs-proto',
      packages=['opentxsproto'],
      install_requires=['protobuf'],
     )
