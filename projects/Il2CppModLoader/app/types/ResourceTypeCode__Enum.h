#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace ResourceTypeCode__Enum {
        inline app::ResourceTypeCode__Enum__Class** type_info = (app::ResourceTypeCode__Enum__Class**)(modloader::win::memory::resolve_rva(0x047345F8));
        inline app::ResourceTypeCode__Enum__Class* get_class() {
            return il2cpp::get_class<app::ResourceTypeCode__Enum__Class>(type_info, "System.Resources", "ResourceTypeCode");
        }
        inline app::ResourceTypeCode__Enum* create() {
            return il2cpp::create_object<app::ResourceTypeCode__Enum>(get_class());
        }
    } // namespace ResourceTypeCode__Enum
} // namespace app::classes::types
