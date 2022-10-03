#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace ResourceTypeCode__Enum {
        extern IL2CPP_MODLOADER_DLLEXPORT app::ResourceTypeCode__Enum__Class** type_info;
        inline app::ResourceTypeCode__Enum__Class* get_class() {
            return il2cpp::get_class<app::ResourceTypeCode__Enum__Class>(type_info, "System.Resources", "ResourceTypeCode");
        }
        inline app::ResourceTypeCode__Enum* create() {
            return il2cpp::create_object<app::ResourceTypeCode__Enum>(get_class());
        }
    } // namespace ResourceTypeCode__Enum
} // namespace app::classes::types
