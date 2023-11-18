#pragma once
#include <Modloader/app/structs/InflateManager_InflateManagerMode__Enum.h>
#include <Modloader/app/structs/InflateManager_InflateManagerMode__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace InflateManager_InflateManagerMode__Enum {
        inline app::InflateManager_InflateManagerMode__Enum__Class** type_info() {
            static app::InflateManager_InflateManagerMode__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::InflateManager_InflateManagerMode__Enum__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::InflateManager_InflateManagerMode__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::InflateManager_InflateManagerMode__Enum__Class>(type_info(), "Ionic.Zlib", "InflateManager", "InflateManagerMode");
        }
        inline app::InflateManager_InflateManagerMode__Enum* create() {
            return il2cpp::create_object<app::InflateManager_InflateManagerMode__Enum>(get_class());
        }
    } // namespace InflateManager_InflateManagerMode__Enum
} // namespace app::classes::types
