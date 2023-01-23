#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/ReflectEventDescriptor.h>
#include <Modloader/app/structs/Type.h>
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/Attribute__Array.h>
#include <Modloader/app/structs/EventInfo_1.h>
#include <Modloader/app/structs/EventDescriptor_1.h>
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/Delegate.h>
#include <Modloader/app/structs/IList.h>
#include <Modloader/app/structs/MethodInfo_1.h>

namespace app::classes::System::ComponentModel::ReflectEventDescriptor {
    IL2CPP_REGISTER_METHOD(0x0299A110, void, ctor_1, (app::ReflectEventDescriptor * this_ptr, app::Type* component_class, app::String* name, app::Type* type, app::Attribute__Array* attributes))
    IL2CPP_REGISTER_METHODINFO(0x04743DF0, ReflectEventDescriptor__ctor__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x0299A360, void, ctor_2, (app::ReflectEventDescriptor * this_ptr, app::Type* component_class, app::EventInfo_1* event_info))
    IL2CPP_REGISTER_METHODINFO(0x04784D60, ReflectEventDescriptor__ctor_1__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x0299A4E0, void, ctor_3, (app::ReflectEventDescriptor * this_ptr, app::Type* component_type, app::EventDescriptor_1* old_reflect_event_descriptor, app::Attribute__Array* attributes))
    IL2CPP_REGISTER_METHOD(0x002FBBA0, app::Type*, get_ComponentType, (app::ReflectEventDescriptor * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0299A5E0, app::Type*, get_EventType, (app::ReflectEventDescriptor * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0299A600, bool, get_IsMulticast, (app::ReflectEventDescriptor * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0299A6F0, void, AddEventHandler, (app::ReflectEventDescriptor * this_ptr, app::Object* component, app::Delegate* value))
    IL2CPP_REGISTER_METHODINFO(0x0478DC20, ReflectEventDescriptor_AddEventHandler__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x0299AB20, void, FillAttributes, (app::ReflectEventDescriptor * this_ptr, app::IList* attributes))
    IL2CPP_REGISTER_METHOD(0x0299AB90, void, FillEventInfoAttribute, (app::ReflectEventDescriptor * this_ptr, app::EventInfo_1* real_event_info, app::IList* attributes))
    IL2CPP_REGISTER_METHOD(0x0299AEA0, void, FillMethods, (app::ReflectEventDescriptor * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x04701A00, ReflectEventDescriptor_FillMethods__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x0299B3E0, void, FillSingleMethodAttribute, (app::ReflectEventDescriptor * this_ptr, app::MethodInfo_1* real_method_info, app::IList* attributes))
    IL2CPP_REGISTER_METHOD(0x0299B700, void, RemoveEventHandler, (app::ReflectEventDescriptor * this_ptr, app::Object* component, app::Delegate* value))
    IL2CPP_REGISTER_METHODINFO(0x04754070, ReflectEventDescriptor_RemoveEventHandler__MethodInfo)
} // namespace app::classes::System::ComponentModel::ReflectEventDescriptor
