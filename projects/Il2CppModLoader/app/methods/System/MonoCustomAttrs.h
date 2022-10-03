#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::classes::System::MonoCustomAttrs {
    IL2CPP_REGISTER_METHOD(0x0226AAB0, bool, IsUserCattrProvider, (app::Object * obj))
    IL2CPP_REGISTER_METHOD(0x0226AD30, app::Object__Array*, GetCustomAttributesInternal, (app::ICustomAttributeProvider * obj, app::Type* attribute_type, bool pseudo_attrs))
    IL2CPP_REGISTER_METHOD(0x0226AE80, app::Object__Array*, GetPseudoCustomAttributes_1, (app::ICustomAttributeProvider * obj, app::Type* attribute_type))
    IL2CPP_REGISTER_METHOD(0x0226B2A0, app::Object__Array*, GetPseudoCustomAttributes_2, (app::Type * type))
    IL2CPP_REGISTER_METHOD(0x0226B5C0, app::Object__Array*, GetCustomAttributesBase, (app::ICustomAttributeProvider * obj, app::Type* attribute_type, bool inherited_only))
    IL2CPP_REGISTER_METHOD(0x0226B8A0, app::Object__Array*, GetCustomAttributes_1, (app::ICustomAttributeProvider * obj, app::Type* attribute_type, bool inherit))
    IL2CPP_REGISTER_METHODINFO(0x0476AFF8, MonoCustomAttrs_GetCustomAttributes__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x0226C650, app::Object__Array*, GetCustomAttributes_2, (app::ICustomAttributeProvider * obj, bool inherit))
    IL2CPP_REGISTER_METHODINFO(0x04765828, MonoCustomAttrs_GetCustomAttributes_1__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x0226C870, app::CustomAttributeData__Array*, GetCustomAttributesDataInternal, (app::ICustomAttributeProvider * obj))
    IL2CPP_REGISTER_METHOD(0x0226C880, app::IList_1_System_Reflection_CustomAttributeData_*, GetCustomAttributesData, (app::ICustomAttributeProvider * obj))
    IL2CPP_REGISTER_METHODINFO(0x04763988, MonoCustomAttrs_GetCustomAttributesData__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x0226C960, bool, IsDefined, (app::ICustomAttributeProvider * obj, app::Type* attribute_type, bool inherit))
    IL2CPP_REGISTER_METHODINFO(0x04744130, MonoCustomAttrs_IsDefined__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x0226CC80, bool, IsDefinedInternal, (app::ICustomAttributeProvider * obj, app::Type* attribute_type))
    IL2CPP_REGISTER_METHOD(0x0226CCB0, app::PropertyInfo_1*, GetBasePropertyDefinition, (app::MonoProperty * property))
    IL2CPP_REGISTER_METHOD(0x0226D250, app::EventInfo_1*, GetBaseEventDefinition, (app::MonoEvent * evt))
    IL2CPP_REGISTER_METHOD(0x0226D550, app::ICustomAttributeProvider*, GetBase, (app::ICustomAttributeProvider * obj))
    IL2CPP_REGISTER_METHOD(0x0226D860, app::AttributeUsageAttribute*, RetrieveAttributeUsageNoCache, (app::Type * attribute_type))
    IL2CPP_REGISTER_METHODINFO(0x04724F28, MonoCustomAttrs_RetrieveAttributeUsageNoCache__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x0226DBB0, app::AttributeUsageAttribute*, RetrieveAttributeUsage, (app::Type * attribute_type))
    IL2CPP_REGISTER_METHOD(0x0226DF60, void, cctor, ())
} // namespace app::classes::System::MonoCustomAttrs
