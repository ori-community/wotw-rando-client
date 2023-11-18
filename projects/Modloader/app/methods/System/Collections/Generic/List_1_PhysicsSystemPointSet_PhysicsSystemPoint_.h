#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/PhysicsSystemPointSet_PhysicsSystemPoint.h>
#include <Modloader/app/structs/List_1_PhysicsSystemPointSet_PhysicsSystemPoint_.h>

namespace app::classes::System::Collections::Generic::List_1_PhysicsSystemPointSet_PhysicsSystemPoint_ {
    IL2CPP_REGISTER_METHOD(0x025EFC50, app::PhysicsSystemPointSet_PhysicsSystemPoint*, get_Item, (app::List_1_PhysicsSystemPointSet_PhysicsSystemPoint_ * this_ptr, int32_t index))
    IL2CPP_REGISTER_METHOD(0x025E8100, void, ctor, (app::List_1_PhysicsSystemPointSet_PhysicsSystemPoint_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02F1E150, void, Add, (app::List_1_PhysicsSystemPointSet_PhysicsSystemPoint_ * this_ptr, app::PhysicsSystemPointSet_PhysicsSystemPoint* item))
} // namespace app::classes::System::Collections::Generic::List_1_PhysicsSystemPointSet_PhysicsSystemPoint_
