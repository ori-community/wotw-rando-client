#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace InflateManager_InflateManagerMode__Enum {
        namespace {
            inline app::InflateManager_InflateManagerMode__Enum__Class* type_info_ref = nullptr;
        }
        inline app::InflateManager_InflateManagerMode__Enum__Class** type_info = &type_info_ref;
        inline app::InflateManager_InflateManagerMode__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::InflateManager_InflateManagerMode__Enum__Class>(type_info, "Ionic.Zlib", "InflateManager", "InflateManagerMode");
        }
        inline app::InflateManager_InflateManagerMode__Enum* create() {
            return il2cpp::create_object<app::InflateManager_InflateManagerMode__Enum>(get_class());
        }
    } // namespace InflateManager_InflateManagerMode__Enum
} // namespace app::classes::types
