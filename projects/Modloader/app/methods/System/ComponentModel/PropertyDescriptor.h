#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/PropertyDescriptor.h>
#include <Modloader/app/structs/Attribute__Array.h>
#include <Modloader/app/structs/DesignerSerializationVisibility__Enum.h>
#include <Modloader/app/structs/EventArgs.h>
#include <Modloader/app/structs/EventHandler.h>
#include <Modloader/app/structs/IList.h>
#include <Modloader/app/structs/MemberDescriptor.h>
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/PropertyDescriptorCollection.h>
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/Type.h>
#include <Modloader/app/structs/TypeConverter.h>

namespace app::classes::System::ComponentModel::PropertyDescriptor {
    IL2CPP_REGISTER_METHOD(0x01FE9DF0, void, ctor_1, (app::PropertyDescriptor * this_ptr, app::String* name, app::Attribute__Array* attrs))
    IL2CPP_REGISTER_METHOD(0x01FE9E00, void, ctor_2, (app::PropertyDescriptor * this_ptr, app::MemberDescriptor* descr))
    IL2CPP_REGISTER_METHOD(0x01FE9E10, void, ctor_3, (app::PropertyDescriptor * this_ptr, app::MemberDescriptor* descr, app::Attribute__Array* attrs))
    IL2CPP_REGISTER_METHOD(0x029925E0, app::TypeConverter*, get_Converter, (app::PropertyDescriptor * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02992820, bool, get_IsLocalizable, (app::PropertyDescriptor * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02992960, app::DesignerSerializationVisibility__Enum, get_SerializationVisibility, (app::PropertyDescriptor * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02992A70, void, AddValueChanged, (app::PropertyDescriptor * this_ptr, app::Object* component, app::EventHandler* handler))
    IL2CPP_REGISTER_METHOD(0x02992CF0, bool, Equals, (app::PropertyDescriptor * this_ptr, app::Object* obj))
    IL2CPP_REGISTER_METHOD(0x02992EC0, app::Object*, CreateInstance, (app::PropertyDescriptor * this_ptr, app::Type* type))
    IL2CPP_REGISTER_METHOD(0x02993140, void, FillAttributes, (app::PropertyDescriptor * this_ptr, app::IList* attribute_list))
    IL2CPP_REGISTER_METHOD(0x02993160, app::PropertyDescriptorCollection*, GetChildProperties_1, (app::PropertyDescriptor * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02993180, app::PropertyDescriptorCollection*, GetChildProperties_2, (app::PropertyDescriptor * this_ptr, app::Attribute__Array* filter))
    IL2CPP_REGISTER_METHOD(0x029931A0, app::PropertyDescriptorCollection*, GetChildProperties_3, (app::PropertyDescriptor * this_ptr, app::Object* instance))
    IL2CPP_REGISTER_METHOD(0x029931C0, app::PropertyDescriptorCollection*, GetChildProperties_4, (app::PropertyDescriptor * this_ptr, app::Object* instance, app::Attribute__Array* filter))
    IL2CPP_REGISTER_METHOD(0x029932D0, app::Object*, GetEditor, (app::PropertyDescriptor * this_ptr, app::Type* editor_base_type))
    IL2CPP_REGISTER_METHOD(0x02993840, int32_t, GetHashCode, (app::PropertyDescriptor * this_ptr))
    IL2CPP_REGISTER_METHOD(0x029938A0, app::Object*, GetInvocationTarget, (app::PropertyDescriptor * this_ptr, app::Type* type, app::Object* instance))
    IL2CPP_REGISTER_METHOD(0x02993A70, app::Type*, GetTypeFromName, (app::PropertyDescriptor * this_ptr, app::String* type_name))
    IL2CPP_REGISTER_METHOD(0x02993D00, void, OnValueChanged, (app::PropertyDescriptor * this_ptr, app::Object* component, app::EventArgs* e))
    IL2CPP_REGISTER_METHOD(0x02993DF0, void, RemoveValueChanged, (app::PropertyDescriptor * this_ptr, app::Object* component, app::EventHandler* handler))
    IL2CPP_REGISTER_METHOD(0x02993FC0, app::EventHandler*, GetValueChangedHandler, (app::PropertyDescriptor * this_ptr, app::Object* component))
    IL2CPP_REGISTER_METHOD(0x00417870, bool, get_SupportsChangeEvents, (app::PropertyDescriptor * this_ptr))
} // namespace app::classes::System::ComponentModel::PropertyDescriptor
