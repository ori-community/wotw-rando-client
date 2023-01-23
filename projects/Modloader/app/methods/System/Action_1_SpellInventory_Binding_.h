#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/Action_1_SpellInventory_Binding_.h>
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/SpellInventory_Binding__Enum.h>

namespace app::classes::System::Action_1_SpellInventory_Binding_ {
    IL2CPP_REGISTER_METHOD(0x00611810, void, ctor, (app::Action_1_SpellInventory_Binding_ * this_ptr, app::Object* object, void* method_1))
    IL2CPP_REGISTER_METHODINFO(0x04746328, Action_1_SpellInventory_Binding___ctor__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x01C77D40, void, Invoke, (app::Action_1_SpellInventory_Binding_ * this_ptr, app::SpellInventory_Binding__Enum obj))
    IL2CPP_REGISTER_METHODINFO(0x04765930, Action_1_SpellInventory_Binding__Invoke__MethodInfo)
} // namespace app::classes::System::Action_1_SpellInventory_Binding_
