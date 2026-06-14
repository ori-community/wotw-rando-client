#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/DelegatingTypeDescriptionProvider.h>
#include <Modloader/app/structs/ICustomTypeDescriptor.h>
#include <Modloader/app/structs/IDictionary.h>
#include <Modloader/app/structs/IExtenderProvider__Array.h>
#include <Modloader/app/structs/IServiceProvider.h>
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/Object__Array.h>
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/Type.h>
#include <Modloader/app/structs/TypeDescriptionProvider.h>
#include <Modloader/app/structs/Type__Array.h>

namespace app::classes::System::ComponentModel::DelegatingTypeDescriptionProvider {
    IL2CPP_REGISTER_METHOD(0x002FB960, void, ctor, app::DelegatingTypeDescriptionProvider* this_ptr, app::Type* type)
    IL2CPP_REGISTER_METHOD(0x01FE29C0, app::TypeDescriptionProvider*, get_Provider, app::DelegatingTypeDescriptionProvider* this_ptr)
    IL2CPP_REGISTER_METHOD(
        0x01FE2AF0,
        app::Object*,
        CreateInstance,
        app::DelegatingTypeDescriptionProvider* this_ptr,
        app::IServiceProvider* provider,
        app::Type* object_type,
        app::Type__Array* arg_types,
        app::Object__Array* args
    )
    IL2CPP_REGISTER_METHOD(0x01FE2B50, app::IDictionary*, GetCache, app::DelegatingTypeDescriptionProvider* this_ptr, app::Object* instance)
    IL2CPP_REGISTER_METHOD(0x01FE2B90, app::String*, GetFullComponentName, app::DelegatingTypeDescriptionProvider* this_ptr, app::Object* component)
    IL2CPP_REGISTER_METHOD(
        0x01FE2BD0,
        app::ICustomTypeDescriptor*,
        GetExtendedTypeDescriptor,
        app::DelegatingTypeDescriptionProvider* this_ptr,
        app::Object* instance
    )
    IL2CPP_REGISTER_METHOD(
        0x01FE2C10,
        app::IExtenderProvider__Array*,
        GetExtenderProviders,
        app::DelegatingTypeDescriptionProvider* this_ptr,
        app::Object* instance
    )
    IL2CPP_REGISTER_METHOD(
        0x01FE2C50,
        app::Type*,
        GetReflectionType,
        app::DelegatingTypeDescriptionProvider* this_ptr,
        app::Type* object_type,
        app::Object* instance
    )
    IL2CPP_REGISTER_METHOD(0x01FE2CA0, app::Type*, GetRuntimeType, app::DelegatingTypeDescriptionProvider* this_ptr, app::Type* object_type)
    IL2CPP_REGISTER_METHOD(
        0x01FE2CE0,
        app::ICustomTypeDescriptor*,
        GetTypeDescriptor,
        app::DelegatingTypeDescriptionProvider* this_ptr,
        app::Type* object_type,
        app::Object* instance
    )
    IL2CPP_REGISTER_METHOD(0x01FE2D30, bool, IsSupportedType, app::DelegatingTypeDescriptionProvider* this_ptr, app::Type* type)
} // namespace app::classes::System::ComponentModel::DelegatingTypeDescriptionProvider
