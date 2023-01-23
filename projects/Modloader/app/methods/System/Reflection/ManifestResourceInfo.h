#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/ManifestResourceInfo.h>
#include <Modloader/app/structs/Assembly.h>
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/ResourceLocation__Enum.h>

namespace app::classes::System::Reflection::ManifestResourceInfo {
    IL2CPP_REGISTER_METHOD(0x00E332C0, void, ctor, (app::ManifestResourceInfo * this_ptr, app::Assembly* containing_assembly, app::String* containing_file_name, app::ResourceLocation__Enum resource_location))
    IL2CPP_REGISTER_METHOD(0x002FA280, app::Assembly*, get_ReferencedAssembly, (app::ManifestResourceInfo * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FB930, app::String*, get_FileName, (app::ManifestResourceInfo * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FD1D0, app::ResourceLocation__Enum, get_ResourceLocation, (app::ManifestResourceInfo * this_ptr))
} // namespace app::classes::System::Reflection::ManifestResourceInfo
