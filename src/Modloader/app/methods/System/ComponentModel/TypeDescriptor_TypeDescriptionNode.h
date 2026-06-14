#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/ICustomTypeDescriptor.h>
#include <Modloader/app/structs/IDictionary.h>
#include <Modloader/app/structs/IExtenderProvider__Array.h>
#include <Modloader/app/structs/IServiceProvider.h>
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/Object__Array.h>
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/Type.h>
#include <Modloader/app/structs/TypeDescriptionProvider.h>
#include <Modloader/app/structs/TypeDescriptor_TypeDescriptionNode.h>
#include <Modloader/app/structs/Type__Array.h>

namespace app::classes::System::ComponentModel::TypeDescriptor_TypeDescriptionNode {
    IL2CPP_REGISTER_METHOD(0x002FBB10, void, ctor, app::TypeDescriptor_TypeDescriptionNode* this_ptr, app::TypeDescriptionProvider* provider)
    IL2CPP_REGISTER_METHOD(
        0x02957DD0,
        app::Object*,
        CreateInstance,
        app::TypeDescriptor_TypeDescriptionNode* this_ptr,
        app::IServiceProvider* provider,
        app::Type* object_type,
        app::Type__Array* arg_types,
        app::Object__Array* args
    )
    IL2CPP_REGISTER_METHOD(0x02957F90, app::IDictionary*, GetCache, app::TypeDescriptor_TypeDescriptionNode* this_ptr, app::Object* instance)
    IL2CPP_REGISTER_METHOD(
        0x02958070,
        app::ICustomTypeDescriptor*,
        GetExtendedTypeDescriptor,
        app::TypeDescriptor_TypeDescriptionNode* this_ptr,
        app::Object* instance
    )
    IL2CPP_REGISTER_METHOD(
        0x02958150,
        app::IExtenderProvider__Array*,
        GetExtenderProviders,
        app::TypeDescriptor_TypeDescriptionNode* this_ptr,
        app::Object* instance
    )
    IL2CPP_REGISTER_METHOD(0x02958230, app::String*, GetFullComponentName, app::TypeDescriptor_TypeDescriptionNode* this_ptr, app::Object* component)
    IL2CPP_REGISTER_METHOD(
        0x02958310,
        app::Type*,
        GetReflectionType,
        app::TypeDescriptor_TypeDescriptionNode* this_ptr,
        app::Type* object_type,
        app::Object* instance
    )
    IL2CPP_REGISTER_METHOD(0x02958410, app::Type*, GetRuntimeType, app::TypeDescriptor_TypeDescriptionNode* this_ptr, app::Type* object_type)
    IL2CPP_REGISTER_METHOD(
        0x02958510,
        app::ICustomTypeDescriptor*,
        GetTypeDescriptor,
        app::TypeDescriptor_TypeDescriptionNode* this_ptr,
        app::Type* object_type,
        app::Object* instance
    )
    IL2CPP_REGISTER_METHOD(0x02958680, bool, IsSupportedType, app::TypeDescriptor_TypeDescriptionNode* this_ptr, app::Type* type)
} // namespace app::classes::System::ComponentModel::TypeDescriptor_TypeDescriptionNode
