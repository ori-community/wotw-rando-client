#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/BlendVector4.h>
#include <Modloader/app/structs/Func_2_Single_Single_.h>
#include <Modloader/app/structs/Vector4.h>

namespace app::classes::BlendVector4 {
    IL2CPP_REGISTER_METHOD(0x00D2B550, void, ctor, app::BlendVector4* this_ptr, app::Func_2_Single_Single_* ease)
    IL2CPP_REGISTER_METHOD(0x00D2B6C0, app::Vector4, Vector4Lerp, app::Vector4 start, app::Vector4 end, float s)
} // namespace app::classes::BlendVector4
