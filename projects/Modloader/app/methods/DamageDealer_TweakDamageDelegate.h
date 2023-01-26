#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/DamageDealer_TweakDamageDelegate.h>
#include <Modloader/app/structs/AsyncCallback.h>
#include <Modloader/app/structs/Damage.h>
#include <Modloader/app/structs/DamageDealer.h>
#include <Modloader/app/structs/IAsyncResult.h>
#include <Modloader/app/structs/IDamageReciever.h>
#include <Modloader/app/structs/Object.h>

namespace app::classes::DamageDealer_TweakDamageDelegate {
    IL2CPP_REGISTER_METHOD(0x00611810, void, ctor, (app::DamageDealer_TweakDamageDelegate * this_ptr, app::Object* object, void* method_1))
    IL2CPP_REGISTER_METHOD(0x00DC7830, app::Damage*, Invoke, (app::DamageDealer_TweakDamageDelegate * this_ptr, app::Damage* dmg, app::DamageDealer* dealer, app::IDamageReciever* reciever))
    IL2CPP_REGISTER_METHOD(0x00DC7DB0, app::IAsyncResult*, BeginInvoke, (app::DamageDealer_TweakDamageDelegate * this_ptr, app::Damage* dmg, app::DamageDealer* dealer, app::IDamageReciever* reciever, app::AsyncCallback* callback, app::Object* object))
    IL2CPP_REGISTER_METHOD(0x00611B40, app::Damage*, EndInvoke, (app::DamageDealer_TweakDamageDelegate * this_ptr, app::IAsyncResult* result))
} // namespace app::classes::DamageDealer_TweakDamageDelegate
