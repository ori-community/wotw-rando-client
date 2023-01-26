#pragma once
#include <Modloader/app/structs/UltimateResourceFallbackLocation__Enum.h>
#include <Modloader/app/structs/UltimateResourceFallbackLocation__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace UltimateResourceFallbackLocation__Enum {
        inline app::UltimateResourceFallbackLocation__Enum__Class** type_info() {
            static app::UltimateResourceFallbackLocation__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::UltimateResourceFallbackLocation__Enum__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::UltimateResourceFallbackLocation__Enum__Class* get_class() {
            return il2cpp::get_class<app::UltimateResourceFallbackLocation__Enum__Class>(type_info(), "System.Resources", "UltimateResourceFallbackLocation");
        }
        inline app::UltimateResourceFallbackLocation__Enum* create() {
            return il2cpp::create_object<app::UltimateResourceFallbackLocation__Enum>(get_class());
        }
    } // namespace UltimateResourceFallbackLocation__Enum
} // namespace app::classes::types
