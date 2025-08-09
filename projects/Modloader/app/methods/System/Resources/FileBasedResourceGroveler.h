#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/CultureInfo.h>
#include <Modloader/app/structs/Dictionary_2_System_String_System_Resources_ResourceSet_.h>
#include <Modloader/app/structs/FileBasedResourceGroveler.h>
#include <Modloader/app/structs/ResourceManager_ResourceManagerMediator.h>
#include <Modloader/app/structs/ResourceSet.h>
#include <Modloader/app/structs/StackCrawlMark__Enum.h>
#include <Modloader/app/structs/String.h>

namespace app::classes::System::Resources::FileBasedResourceGroveler {
    IL2CPP_REGISTER_METHOD(0x002FA490, void, ctor, app::FileBasedResourceGroveler* this_ptr, app::ResourceManager_ResourceManagerMediator* mediator)
    IL2CPP_REGISTER_METHOD(
        0x02699B70,
        app::ResourceSet*,
        GrovelForResourceSet,
        app::FileBasedResourceGroveler* this_ptr,
        app::CultureInfo* culture,
        app::Dictionary_2_System_String_System_Resources_ResourceSet_* local_resource_sets,
        bool try_parents,
        bool create_if_not_exists,
        app::StackCrawlMark__Enum* stack_mark
    )
    IL2CPP_REGISTER_METHOD(
        0x0269A0D0,
        app::String*,
        FindResourceFile,
        app::FileBasedResourceGroveler* this_ptr,
        app::CultureInfo* culture,
        app::String* file_name
    )
    IL2CPP_REGISTER_METHOD(0x0269A200, app::ResourceSet*, CreateResourceSet, app::FileBasedResourceGroveler* this_ptr, app::String* file)
} // namespace app::classes::System::Resources::FileBasedResourceGroveler
