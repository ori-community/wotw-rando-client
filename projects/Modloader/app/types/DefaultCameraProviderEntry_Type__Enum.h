#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace DefaultCameraProviderEntry_Type__Enum {
        inline app::DefaultCameraProviderEntry_Type__Enum__Class** type_info = (app::DefaultCameraProviderEntry_Type__Enum__Class**)(modloader::win::memory::resolve_rva(0x04790CC0));
        inline app::DefaultCameraProviderEntry_Type__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::DefaultCameraProviderEntry_Type__Enum__Class>(type_info, "", "DefaultCameraProviderEntry", "Type");
        }
        inline app::DefaultCameraProviderEntry_Type__Enum* create() {
            return il2cpp::create_object<app::DefaultCameraProviderEntry_Type__Enum>(get_class());
        }
    } // namespace DefaultCameraProviderEntry_Type__Enum
} // namespace app::classes::types
