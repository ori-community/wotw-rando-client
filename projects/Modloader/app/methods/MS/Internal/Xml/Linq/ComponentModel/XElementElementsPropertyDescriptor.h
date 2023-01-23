#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/XElementElementsPropertyDescriptor.h>
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/XObjectChangeEventArgs.h>

namespace app::classes::MS::Internal::Xml::Linq::ComponentModel::XElementElementsPropertyDescriptor {
    IL2CPP_REGISTER_METHOD(0x0302A980, void, ctor, (app::XElementElementsPropertyDescriptor * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0302AA10, app::Object*, GetValue, (app::XElementElementsPropertyDescriptor * this_ptr, app::Object* component))
    IL2CPP_REGISTER_METHOD(0x0302AD00, void, OnChanged, (app::XElementElementsPropertyDescriptor * this_ptr, app::Object* sender, app::XObjectChangeEventArgs* args))
    IL2CPP_REGISTER_METHOD(0x0302AF30, void, OnChanging, (app::XElementElementsPropertyDescriptor * this_ptr, app::Object* sender, app::XObjectChangeEventArgs* args))
} // namespace app::classes::MS::Internal::Xml::Linq::ComponentModel::XElementElementsPropertyDescriptor
