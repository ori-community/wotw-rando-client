#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::System::ComponentModel::TypeDescriptor_TypeDescriptionNode {
    IL2CPP_REGISTER_METHOD(0x002FBB10, void, ctor, (app::TypeDescriptor_TypeDescriptionNode * this_ptr, app::TypeDescriptionProvider * provider))
    IL2CPP_REGISTER_METHOD(0x02957DD0, app::Object *, CreateInstance, (app::TypeDescriptor_TypeDescriptionNode * this_ptr, app::IServiceProvider * provider, app::Type * object_type, app::Type__Array * arg_types, app::Object__Array * args))
    IL2CPP_REGISTER_METHODINFO(0x04784828, TypeDescriptor_TypeDescriptionNode_CreateInstance__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02957F90, app::IDictionary *, GetCache, (app::TypeDescriptor_TypeDescriptionNode * this_ptr, app::Object * instance))
    IL2CPP_REGISTER_METHODINFO(0x04719C38, TypeDescriptor_TypeDescriptionNode_GetCache__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02958070, app::ICustomTypeDescriptor *, GetExtendedTypeDescriptor, (app::TypeDescriptor_TypeDescriptionNode * this_ptr, app::Object * instance))
    IL2CPP_REGISTER_METHODINFO(0x0473A760, TypeDescriptor_TypeDescriptionNode_GetExtendedTypeDescriptor__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02958150, app::IExtenderProvider__Array *, GetExtenderProviders, (app::TypeDescriptor_TypeDescriptionNode * this_ptr, app::Object * instance))
    IL2CPP_REGISTER_METHODINFO(0x04721328, TypeDescriptor_TypeDescriptionNode_GetExtenderProviders__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02958230, app::String *, GetFullComponentName, (app::TypeDescriptor_TypeDescriptionNode * this_ptr, app::Object * component))
    IL2CPP_REGISTER_METHODINFO(0x04707FF8, TypeDescriptor_TypeDescriptionNode_GetFullComponentName__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02958310, app::Type *, GetReflectionType, (app::TypeDescriptor_TypeDescriptionNode * this_ptr, app::Type * object_type, app::Object * instance))
    IL2CPP_REGISTER_METHODINFO(0x04723BF0, TypeDescriptor_TypeDescriptionNode_GetReflectionType__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02958410, app::Type *, GetRuntimeType, (app::TypeDescriptor_TypeDescriptionNode * this_ptr, app::Type * object_type))
    IL2CPP_REGISTER_METHODINFO(0x04717538, TypeDescriptor_TypeDescriptionNode_GetRuntimeType__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02958510, app::ICustomTypeDescriptor *, GetTypeDescriptor, (app::TypeDescriptor_TypeDescriptionNode * this_ptr, app::Type * object_type, app::Object * instance))
    IL2CPP_REGISTER_METHODINFO(0x04788068, TypeDescriptor_TypeDescriptionNode_GetTypeDescriptor__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02958680, bool, IsSupportedType, (app::TypeDescriptor_TypeDescriptionNode * this_ptr, app::Type * type))
    IL2CPP_REGISTER_METHODINFO(0x047407A0, TypeDescriptor_TypeDescriptionNode_IsSupportedType__MethodInfo)
}
