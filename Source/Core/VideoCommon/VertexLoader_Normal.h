// Copyright 2008 Dolphin Emulator Project
// Licensed under GPLv2+
// Refer to the license.txt file included.

#pragma once

#include "Common/CommonTypes.h"
#include "VideoCommon/VertexLoader.h"

class VertexLoader_Normal
{
public:
  static u32 GetSize(u64 type, u32 format, u32 elements, u32 index3);

  static TPipelineFunction GetFunction(u64 type, u32 format, u32 elements, u32 index3);
};
