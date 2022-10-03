#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace TextGenerator {
        extern IL2CPP_MODLOADER_DLLEXPORT app::TextGenerator__Class** type_info;
        inline app::TextGenerator__Class* get_class() {
            return il2cpp::get_class<app::TextGenerator__Class>(type_info, "UnityEngine", "TextGenerator");
        }
        inline app::TextGenerator* create() {
            return il2cpp::create_object<app::TextGenerator>(get_class());
        }
    } // namespace TextGenerator
} // namespace app::classes::types
