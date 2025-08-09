#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Archive.h>
#include <Modloader/app/structs/Cart.h>
#include <Modloader/app/structs/Collision.h>
#include <Modloader/app/structs/GameObject.h>
#include <Modloader/app/structs/Rail.h>
#include <Modloader/app/structs/Renderer.h>

namespace app::classes::Rail {
    IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, get_Activated, app::Rail* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00726BD0, void, set_Activated, app::Rail* this_ptr, bool value)
    IL2CPP_REGISTER_METHOD(0x00726D50, app::Renderer*, get_RailRenderer, app::Rail* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00726E20, void, Start, app::Rail* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00727000, void, FixedUpdate, app::Rail* this_ptr)
    IL2CPP_REGISTER_METHOD(0x007277B0, bool, ShouldDealDamage, app::Rail* this_ptr, app::GameObject* obj)
    IL2CPP_REGISTER_METHOD(0x00727890, void, StopIgnoringCart, app::Rail* this_ptr, app::Cart* cart)
    IL2CPP_REGISTER_METHOD(0x00727980, void, IgnoreCart, app::Rail* this_ptr, app::Cart* cart, float time)
    IL2CPP_REGISTER_METHOD(0x00727B90, bool, IsCartIgnored, app::Rail* this_ptr, app::Cart* cart)
    IL2CPP_REGISTER_METHOD(0x00727C50, void, OnCollisionEnter, app::Rail* this_ptr, app::Collision* col)
    IL2CPP_REGISTER_METHOD(0x00417870, bool, get_RequiresNightberry, app::Rail* this_ptr)
    IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, get_RequiresCart, app::Rail* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00727F90, void, Serialize, app::Rail* this_ptr, app::Archive* ar)
    IL2CPP_REGISTER_METHOD(0x00727FE0, void, OnDrawGizmos, app::Rail* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00728350, void, ctor, app::Rail* this_ptr)
    IL2CPP_REGISTER_METHOD(0x007284D0, void, cctor, )
} // namespace app::classes::Rail
