#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::classes::System::Resources::FileBasedResourceGroveler {
    IL2CPP_REGISTER_METHOD(0x002FA490, void, ctor, (app::FileBasedResourceGroveler * this_ptr, app::ResourceManager_ResourceManagerMediator* mediator))
    IL2CPP_REGISTER_METHOD(0x02699B70, app::ResourceSet*, GrovelForResourceSet, (app::FileBasedResourceGroveler * this_ptr, app::CultureInfo* culture, app::Dictionary_2_System_String_System_Resources_ResourceSet_* local_resource_sets, bool try_parents, bool create_if_not_exists, app::StackCrawlMark__Enum* stack_mark))
    IL2CPP_REGISTER_METHODINFO(0x04741D00, FileBasedResourceGroveler_GrovelForResourceSet__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x0269A0D0, app::String*, FindResourceFile, (app::FileBasedResourceGroveler * this_ptr, app::CultureInfo* culture, app::String* file_name))
    IL2CPP_REGISTER_METHOD(0x0269A200, app::ResourceSet*, CreateResourceSet, (app::FileBasedResourceGroveler * this_ptr, app::String* file))
    IL2CPP_REGISTER_METHODINFO(0x04727ED8, FileBasedResourceGroveler_CreateResourceSet__MethodInfo)
} // namespace app::classes::System::Resources::FileBasedResourceGroveler
