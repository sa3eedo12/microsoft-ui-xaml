﻿// Copyright (c) Microsoft Corporation. All rights reserved.
// Licensed under the MIT License. See LICENSE in the project root for license information.

#pragma once

#include "ScrollControllerScrollFromRequestedEventArgs.g.h"

class ScrollControllerScrollFromRequestedEventArgs :
    public winrt::implementation::ScrollControllerScrollFromRequestedEventArgsT<ScrollControllerScrollFromRequestedEventArgs>
{
public:
    ~ScrollControllerScrollFromRequestedEventArgs()
    {
        SCROLLPRESENTER_TRACE_VERBOSE(nullptr, TRACE_MSG_METH, METH_NAME, this);
    }

    ScrollControllerScrollFromRequestedEventArgs(
        float offsetVelocity,
        winrt::IReference<float> inertiaDecayRate);

    float OffsetVelocity() const;
    winrt::IReference<float> InertiaDecayRate() const;
    winrt::ScrollingScrollInfo ScrollInfo() const;
    void ScrollInfo(winrt::ScrollingScrollInfo scrollInfo);

private:
    float m_offsetVelocity{ 0.0f };
    winrt::IReference<float> m_inertiaDecayRate{};
    winrt::ScrollingScrollInfo m_scrollInfo{ -1 };
};
