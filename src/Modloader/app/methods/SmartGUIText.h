#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Rect.h>
#include <Modloader/app/structs/SmartGUIText.h>

namespace app::classes::SmartGUIText {
    IL2CPP_REGISTER_METHOD(0x03117D00, void, Initialize, )
    IL2CPP_REGISTER_METHOD(0x03117DB0, void, AssertInitialized, )
    IL2CPP_REGISTER_METHOD(0x03117F10, void, AssertEnoughCache, int32_t n)
    IL2CPP_REGISTER_METHOD(0x03118020, void, EnlargeCache, int32_t n)
    IL2CPP_REGISTER_METHOD(0x03118240, int32_t, GetDigitAmount, int32_t n)
    IL2CPP_REGISTER_METHOD(0x03118280, void, Label_1, app::Rect rect, int32_t n)
    IL2CPP_REGISTER_METHOD(0x03118390, void, Label_2, app::Rect rect, float f, int32_t digits)
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, app::SmartGUIText* this_ptr)
    IL2CPP_REGISTER_METHOD(0x03118650, void, cctor, )
} // namespace app::classes::SmartGUIText
