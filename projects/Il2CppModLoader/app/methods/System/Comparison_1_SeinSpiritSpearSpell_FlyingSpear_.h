#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::classes::System::Comparison_1_SeinSpiritSpearSpell_FlyingSpear_ {
    IL2CPP_REGISTER_METHOD(0x00611810, void, ctor, (app::Comparison_1_SeinSpiritSpearSpell_FlyingSpear_ * this_ptr, app::Object* object, void* method_1))
    IL2CPP_REGISTER_METHOD(0x02B8B6D0, int32_t, Invoke, (app::Comparison_1_SeinSpiritSpearSpell_FlyingSpear_ * this_ptr, app::SeinSpiritSpearSpell_FlyingSpear x, app::SeinSpiritSpearSpell_FlyingSpear y))
    IL2CPP_REGISTER_METHOD(0x02C7BBF0, app::IAsyncResult*, BeginInvoke, (app::Comparison_1_SeinSpiritSpearSpell_FlyingSpear_ * this_ptr, app::SeinSpiritSpearSpell_FlyingSpear x, app::SeinSpiritSpearSpell_FlyingSpear y, app::AsyncCallback* callback, app::Object* object))
    IL2CPP_REGISTER_METHOD(0x00F550D0, int32_t, EndInvoke, (app::Comparison_1_SeinSpiritSpearSpell_FlyingSpear_ * this_ptr, app::IAsyncResult* result))
} // namespace app::classes::System::Comparison_1_SeinSpiritSpearSpell_FlyingSpear_
