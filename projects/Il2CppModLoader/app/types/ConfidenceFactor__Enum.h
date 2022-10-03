#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace ConfidenceFactor__Enum {
        extern IL2CPP_MODLOADER_DLLEXPORT app::ConfidenceFactor__Enum__Class** type_info;
        inline app::ConfidenceFactor__Enum__Class* get_class() {
            return il2cpp::get_class<app::ConfidenceFactor__Enum__Class>(type_info, "Mono.Math.Prime", "ConfidenceFactor");
        }
        inline app::ConfidenceFactor__Enum* create() {
            return il2cpp::create_object<app::ConfidenceFactor__Enum>(get_class());
        }
    } // namespace ConfidenceFactor__Enum
} // namespace app::classes::types
