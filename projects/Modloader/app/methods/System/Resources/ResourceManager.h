#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Assembly.h>
#include <Modloader/app/structs/AssemblyName.h>
#include <Modloader/app/structs/CultureInfo.h>
#include <Modloader/app/structs/Dictionary_2_System_String_System_Resources_ResourceSet_.h>
#include <Modloader/app/structs/ResourceManager.h>
#include <Modloader/app/structs/ResourceSet.h>
#include <Modloader/app/structs/StackCrawlMark__Enum.h>
#include <Modloader/app/structs/StreamingContext.h>
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/Type.h>
#include <Modloader/app/structs/UltimateResourceFallbackLocation__Enum.h>
#include <Modloader/app/structs/Version.h>

namespace app::classes::System::Resources::ResourceManager {
    IL2CPP_REGISTER_METHOD(0x01A84750, void, Init, app::ResourceManager* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01A84920, void, ctor_1, app::ResourceManager* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01A84C00, void, ctor_2, app::ResourceManager* this_ptr, app::String* base_name, app::Assembly* assembly)
    IL2CPP_REGISTER_METHOD(0x01A84F20, void, ctor_3, app::ResourceManager* this_ptr, app::Type* resource_source)
    IL2CPP_REGISTER_METHOD(0x01A85280, void, OnDeserializing, app::ResourceManager* this_ptr, app::StreamingContext ctx)
    IL2CPP_REGISTER_METHOD(0x01A852A0, void, OnDeserialized, app::ResourceManager* this_ptr, app::StreamingContext ctx)
    IL2CPP_REGISTER_METHOD(0x01A85740, void, OnSerializing, app::ResourceManager* this_ptr, app::StreamingContext ctx)
    IL2CPP_REGISTER_METHOD(0x01A858A0, void, CommonAssemblyInit, app::ResourceManager* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FA280, app::String*, get_BaseName, app::ResourceManager* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00585310, bool, get_IgnoreCase, app::ResourceManager* this_ptr)
    IL2CPP_REGISTER_METHOD(0x003FF2B0, app::UltimateResourceFallbackLocation__Enum, get_FallbackLocation, app::ResourceManager* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01A85D60, app::String*, GetResourceFileName, app::ResourceManager* this_ptr, app::CultureInfo* culture)
    IL2CPP_REGISTER_METHOD(0x01A85F80, app::ResourceSet*, GetFirstResourceSet, app::ResourceManager* this_ptr, app::CultureInfo* culture)
    IL2CPP_REGISTER_METHOD(
        0x01A864C0,
        app::ResourceSet*,
        GetResourceSet,
        app::ResourceManager* this_ptr,
        app::CultureInfo* culture,
        bool create_if_not_exists,
        bool try_parents
    )
    IL2CPP_REGISTER_METHOD(
        0x01A86890,
        app::ResourceSet*,
        InternalGetResourceSet_1,
        app::ResourceManager* this_ptr,
        app::CultureInfo* culture,
        bool create_if_not_exists,
        bool try_parents
    )
    IL2CPP_REGISTER_METHOD(
        0x01A868C0,
        app::ResourceSet*,
        InternalGetResourceSet_2,
        app::ResourceManager* this_ptr,
        app::CultureInfo* requested_culture,
        bool create_if_not_exists,
        bool try_parents,
        app::StackCrawlMark__Enum* stack_mark
    )
    IL2CPP_REGISTER_METHOD(
        0x01A86FF0,
        void,
        AddResourceSet,
        app::Dictionary_2_System_String_System_Resources_ResourceSet_* local_resource_sets,
        app::String* culture_name,
        app::ResourceSet** rs
    )
    IL2CPP_REGISTER_METHOD(0x01A87210, app::Version*, GetSatelliteContractVersion, app::Assembly* a)
    IL2CPP_REGISTER_METHOD(0x01A87850, app::CultureInfo*, GetNeutralResourcesLanguage, app::Assembly* a)
    IL2CPP_REGISTER_METHOD(0x01A87870, bool, CompareNames, app::String* asm_type_name1, app::String* type_name2, app::AssemblyName* asm_name2)
    IL2CPP_REGISTER_METHOD(0x002FA000, void, SetAppXConfiguration, app::ResourceManager* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01A87DA0, app::String*, GetString, app::ResourceManager* this_ptr, app::String* name, app::CultureInfo* culture)
    IL2CPP_REGISTER_METHOD(0x01A88280, void, cctor, )
} // namespace app::classes::System::Resources::ResourceManager
