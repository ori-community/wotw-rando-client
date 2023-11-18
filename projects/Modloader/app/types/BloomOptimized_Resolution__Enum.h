#pragma once
#include <Modloader/app/structs/BloomOptimized_Resolution__Enum.h>
#include <Modloader/app/structs/BloomOptimized_Resolution__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace BloomOptimized_Resolution__Enum {
        inline app::BloomOptimized_Resolution__Enum__Class** type_info() {
            static app::BloomOptimized_Resolution__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::BloomOptimized_Resolution__Enum__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::BloomOptimized_Resolution__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::BloomOptimized_Resolution__Enum__Class>(type_info(), "UnityStandardAssets.ImageEffects", "BloomOptimized", "Resolution");
        }
        inline app::BloomOptimized_Resolution__Enum* create() {
            return il2cpp::create_object<app::BloomOptimized_Resolution__Enum>(get_class());
        }
    } // namespace BloomOptimized_Resolution__Enum
} // namespace app::classes::types
