#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/Action_1_SeinSpiritSpearSpell_FlyingSpear_.h>
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/SeinSpiritSpearSpell_FlyingSpear.h>
#include <Modloader/app/structs/IAsyncResult.h>
#include <Modloader/app/structs/AsyncCallback.h>

namespace app::classes::System::Action_1_SeinSpiritSpearSpell_FlyingSpear_ {
    IL2CPP_REGISTER_METHOD(0x00611810, void, ctor, (app::Action_1_SeinSpiritSpearSpell_FlyingSpear_ * this_ptr, app::Object* object, void* method_1))
    IL2CPP_REGISTER_METHOD(0x02A00490, void, Invoke, (app::Action_1_SeinSpiritSpearSpell_FlyingSpear_ * this_ptr, app::SeinSpiritSpearSpell_FlyingSpear obj))
    IL2CPP_REGISTER_METHOD(0x02A039E0, app::IAsyncResult*, BeginInvoke, (app::Action_1_SeinSpiritSpearSpell_FlyingSpear_ * this_ptr, app::SeinSpiritSpearSpell_FlyingSpear obj, app::AsyncCallback* callback, app::Object* object))
    IL2CPP_REGISTER_METHOD(0x00611B40, void, EndInvoke, (app::Action_1_SeinSpiritSpearSpell_FlyingSpear_ * this_ptr, app::IAsyncResult* result))
} // namespace app::classes::System::Action_1_SeinSpiritSpearSpell_FlyingSpear_
