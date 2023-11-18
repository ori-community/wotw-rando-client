#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/ReflectPropertyDescriptor.h>
#include <Modloader/app/structs/Attribute__Array.h>
#include <Modloader/app/structs/EventArgs.h>
#include <Modloader/app/structs/EventDescriptor_1.h>
#include <Modloader/app/structs/EventHandler.h>
#include <Modloader/app/structs/IExtenderProvider.h>
#include <Modloader/app/structs/IList.h>
#include <Modloader/app/structs/MethodInfo_1.h>
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/PropertyChangedEventArgs.h>
#include <Modloader/app/structs/PropertyDescriptor.h>
#include <Modloader/app/structs/PropertyInfo_1.h>
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/Type.h>

namespace app::classes::System::ComponentModel::ReflectPropertyDescriptor {
    IL2CPP_REGISTER_METHOD(0x0299BA60, void, ctor_1, (app::ReflectPropertyDescriptor * this_ptr, app::Type* component_class, app::String* name, app::Type* type, app::Attribute__Array* attributes))
    IL2CPP_REGISTER_METHOD(0x0299BC80, void, ctor_2, (app::ReflectPropertyDescriptor * this_ptr, app::Type* component_class, app::String* name, app::Type* type, app::PropertyInfo_1* prop_info, app::MethodInfo_1* get_method, app::MethodInfo_1* set_method, app::Attribute__Array* attrs))
    IL2CPP_REGISTER_METHOD(0x0299BE10, void, ctor_3, (app::ReflectPropertyDescriptor * this_ptr, app::Type* component_class, app::String* name, app::Type* type, app::Type* receiver_type, app::MethodInfo_1* get_method, app::MethodInfo_1* set_method, app::Attribute__Array* attrs))
    IL2CPP_REGISTER_METHOD(0x0299BF40, void, ctor_4, (app::ReflectPropertyDescriptor * this_ptr, app::Type* component_class, app::PropertyDescriptor* old_reflect_property_descriptor, app::Attribute__Array* attributes))
    IL2CPP_REGISTER_METHOD(0x0299C3C0, app::Object*, get_AmbientValue, (app::ReflectPropertyDescriptor * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0299C5B0, app::EventDescriptor_1*, get_ChangedEventValue, (app::ReflectPropertyDescriptor * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0299C7D0, app::EventDescriptor_1*, get_IPropChangedEventValue, (app::ReflectPropertyDescriptor * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0299C9E0, void, set_IPropChangedEventValue, (app::ReflectPropertyDescriptor * this_ptr, app::EventDescriptor_1* value))
    IL2CPP_REGISTER_METHOD(0x002FBC40, app::Type*, get_ComponentType, (app::ReflectPropertyDescriptor * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0299CAA0, app::Object*, get_DefaultValue, (app::ReflectPropertyDescriptor * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0299CDD0, app::MethodInfo_1*, get_GetMethodValue, (app::ReflectPropertyDescriptor * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0299D240, bool, get_IsExtender, (app::ReflectPropertyDescriptor * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0299D2E0, bool, get_IsReadOnly, (app::ReflectPropertyDescriptor * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FBC60, app::Type*, get_PropertyType, (app::ReflectPropertyDescriptor * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0299D470, app::MethodInfo_1*, get_ResetMethodValue, (app::ReflectPropertyDescriptor * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0299D770, app::MethodInfo_1*, get_SetMethodValue, (app::ReflectPropertyDescriptor * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0299DD60, app::MethodInfo_1*, get_ShouldSerializeMethodValue, (app::ReflectPropertyDescriptor * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0299E060, void, AddValueChanged, (app::ReflectPropertyDescriptor * this_ptr, app::Object* component, app::EventHandler* handler))
    IL2CPP_REGISTER_METHOD(0x0299E310, bool, ExtenderCanResetValue, (app::ReflectPropertyDescriptor * this_ptr, app::IExtenderProvider* provider, app::Object* component))
    IL2CPP_REGISTER_METHOD(0x005B0220, app::Type*, ExtenderGetReceiverType, (app::ReflectPropertyDescriptor * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0299E5D0, app::Type*, ExtenderGetType, (app::ReflectPropertyDescriptor * this_ptr, app::IExtenderProvider* provider))
    IL2CPP_REGISTER_METHOD(0x0299E5F0, app::Object*, ExtenderGetValue, (app::ReflectPropertyDescriptor * this_ptr, app::IExtenderProvider* provider, app::Object* component))
    IL2CPP_REGISTER_METHOD(0x0299E7A0, void, ExtenderResetValue, (app::ReflectPropertyDescriptor * this_ptr, app::IExtenderProvider* provider, app::Object* component, app::PropertyDescriptor* notify_desc))
    IL2CPP_REGISTER_METHOD(0x0299EB60, void, ExtenderSetValue, (app::ReflectPropertyDescriptor * this_ptr, app::IExtenderProvider* provider, app::Object* component, app::Object* value, app::PropertyDescriptor* notify_desc))
    IL2CPP_REGISTER_METHOD(0x0299EEF0, bool, ExtenderShouldSerializeValue, (app::ReflectPropertyDescriptor * this_ptr, app::IExtenderProvider* provider, app::Object* component))
    IL2CPP_REGISTER_METHOD(0x0299F320, bool, CanResetValue, (app::ReflectPropertyDescriptor * this_ptr, app::Object* component))
    IL2CPP_REGISTER_METHOD(0x0299F5D0, void, FillAttributes, (app::ReflectPropertyDescriptor * this_ptr, app::IList* attributes))
    IL2CPP_REGISTER_METHOD(0x0299FF90, app::Object*, GetValue, (app::ReflectPropertyDescriptor * this_ptr, app::Object* component))
    IL2CPP_REGISTER_METHOD(0x029A02B0, void, OnINotifyPropertyChanged, (app::ReflectPropertyDescriptor * this_ptr, app::Object* component, app::PropertyChangedEventArgs* e))
    IL2CPP_REGISTER_METHOD(0x029A0400, void, OnValueChanged, (app::ReflectPropertyDescriptor * this_ptr, app::Object* component, app::EventArgs* e))
    IL2CPP_REGISTER_METHOD(0x029A0590, void, RemoveValueChanged, (app::ReflectPropertyDescriptor * this_ptr, app::Object* component, app::EventHandler* handler))
    IL2CPP_REGISTER_METHOD(0x029A0820, void, ResetValue, (app::ReflectPropertyDescriptor * this_ptr, app::Object* component))
    IL2CPP_REGISTER_METHOD(0x029A0B80, void, SetValue, (app::ReflectPropertyDescriptor * this_ptr, app::Object* component, app::Object* value))
    IL2CPP_REGISTER_METHOD(0x029A0FD0, bool, ShouldSerializeValue, (app::ReflectPropertyDescriptor * this_ptr, app::Object* component))
    IL2CPP_REGISTER_METHOD(0x029A1300, bool, get_SupportsChangeEvents, (app::ReflectPropertyDescriptor * this_ptr))
    IL2CPP_REGISTER_METHOD(0x029A1340, void, cctor, ())
} // namespace app::classes::System::ComponentModel::ReflectPropertyDescriptor
