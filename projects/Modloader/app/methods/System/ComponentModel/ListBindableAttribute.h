#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/ListBindableAttribute.h>
#include <Modloader/app/structs/BindableSupport__Enum.h>
#include <Modloader/app/structs/Object.h>

namespace app::classes::System::ComponentModel::ListBindableAttribute {
    IL2CPP_REGISTER_METHOD(0x0052C650, void, ctor_1, (app::ListBindableAttribute * this_ptr, bool list_bindable))
    IL2CPP_REGISTER_METHOD(0x01FF45F0, void, ctor_2, (app::ListBindableAttribute * this_ptr, app::BindableSupport__Enum flags))
    IL2CPP_REGISTER_METHOD(0x0052B590, bool, get_ListBindable, (app::ListBindableAttribute * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01FF4610, bool, Equals, (app::ListBindableAttribute * this_ptr, app::Object* obj))
    IL2CPP_REGISTER_METHOD(0x01FDE840, int32_t, GetHashCode, (app::ListBindableAttribute * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01FF46E0, bool, IsDefaultAttribute, (app::ListBindableAttribute * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01FF47B0, void, cctor, ())
} // namespace app::classes::System::ComponentModel::ListBindableAttribute
