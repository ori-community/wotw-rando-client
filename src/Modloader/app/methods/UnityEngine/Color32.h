#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Color.h>
#include <Modloader/app/structs/Color32.h>
#include <Modloader/app/structs/Color32__Boxed.h>
#include <Modloader/app/structs/String.h>

namespace app::classes::UnityEngine::Color32 {
    IL2CPP_REGISTER_METHOD(0x001EC1C0, void, ctor, app::Color32__Boxed* this_ptr, uint8_t r, uint8_t g, uint8_t b, uint8_t a)
    IL2CPP_REGISTER_METHOD(0x024287C0, app::Color32, op_Implicit_1, app::Color c)
    IL2CPP_REGISTER_METHOD(0x02428900, app::Color, op_Implicit_2, app::Color32 c)
    IL2CPP_REGISTER_METHOD(0x001EC1E0, app::String*, ToString, app::Color32__Boxed* this_ptr)
} // namespace app::classes::UnityEngine::Color32
