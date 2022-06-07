#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::System::ComponentModel::ReflectTypeDescriptionProvider_ReflectedTypeData {
    IL2CPP_REGISTER_METHOD(0x002FA490, void, ctor, (app::ReflectTypeDescriptionProvider_ReflectedTypeData * this_ptr, app::Type * type))
    IL2CPP_REGISTER_METHOD(0x029A94D0, bool, get_IsPopulated, (app::ReflectTypeDescriptionProvider_ReflectedTypeData * this_ptr))
    IL2CPP_REGISTER_METHOD(0x029A9500, app::AttributeCollection *, GetAttributes, (app::ReflectTypeDescriptionProvider_ReflectedTypeData * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01717360, app::String *, GetClassName, (app::ReflectTypeDescriptionProvider_ReflectedTypeData * this_ptr, app::Object * instance))
    IL2CPP_REGISTER_METHOD(0x029A9C80, app::String *, GetComponentName, (app::ReflectTypeDescriptionProvider_ReflectedTypeData * this_ptr, app::Object * instance))
    IL2CPP_REGISTER_METHOD(0x029A9D60, app::TypeConverter *, GetConverter, (app::ReflectTypeDescriptionProvider_ReflectedTypeData * this_ptr, app::Object * instance))
    IL2CPP_REGISTER_METHOD(0x029AA1F0, app::EventDescriptor_1 *, GetDefaultEvent, (app::ReflectTypeDescriptionProvider_ReflectedTypeData * this_ptr, app::Object * instance))
    IL2CPP_REGISTER_METHOD(0x029AA480, app::PropertyDescriptor *, GetDefaultProperty, (app::ReflectTypeDescriptionProvider_ReflectedTypeData * this_ptr, app::Object * instance))
    IL2CPP_REGISTER_METHOD(0x029AA680, app::Object *, GetEditor, (app::ReflectTypeDescriptionProvider_ReflectedTypeData * this_ptr, app::Object * instance, app::Type * editor_base_type))
    IL2CPP_REGISTER_METHOD(0x029AAD10, app::EditorAttribute *, GetEditorAttribute, (app::AttributeCollection * attributes, app::Type * editor_base_type))
    IL2CPP_REGISTER_METHOD(0x029AAFE0, app::EventDescriptorCollection *, GetEvents, (app::ReflectTypeDescriptionProvider_ReflectedTypeData * this_ptr))
    IL2CPP_REGISTER_METHOD(0x029AB4C0, app::PropertyDescriptorCollection *, GetProperties, (app::ReflectTypeDescriptionProvider_ReflectedTypeData * this_ptr))
    IL2CPP_REGISTER_METHOD(0x029AB9A0, app::Type *, GetTypeFromName, (app::ReflectTypeDescriptionProvider_ReflectedTypeData * this_ptr, app::String * type_name))
    IL2CPP_REGISTER_METHOD(0x029ABBB0, void, Refresh, (app::ReflectTypeDescriptionProvider_ReflectedTypeData * this_ptr))
}
