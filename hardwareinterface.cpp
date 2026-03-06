// Copyright (C) 2026 The Qt Company Ltd.
// SPDX-License-Identifier: LicenseRef-Qt-Commercial OR BSD-3-Clause

#include "hardwareinterface.h"

#include <cstdlib>
#include <ctime>

HardwareInterface::HardwareInterface()
{
    std::srand(std::time(nullptr));
}

int HardwareInterface::readBpm() {
    return 75 + std::rand()/((RAND_MAX + 1u)/20);
}
