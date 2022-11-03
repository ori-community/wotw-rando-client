#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace BloomOptimized_Resolution__Enum {
        namespace {
            inline app::BloomOptimized_Resolution__Enum__Class* type_info_ref = nullptr;
        }
        inline app::BloomOptimized_Resolution__Enum__Class** type_info = &type_info_ref;
        inline app::BloomOptimized_Resolution__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::BloomOptimized_Resolution__Enum__Class>(type_info, "UnityStandardAssets.ImageEffects", "BloomOptimized", "Resolution");
        }
        inline app::BloomOptimized_Resolution__Enum* create() {
            return il2cpp::create_object<app::BloomOptimized_Resolution__Enum>(get_class());
        }
    } // namespace BloomOptimized_Resolution__Enum
} // namespace app::classes::types
