#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace Ambience_Processing {
        extern IL2CPP_MODLOADER_DLLEXPORT app::Ambience_Processing__Class** type_info;
        inline app::Ambience_Processing__Class* get_class() {
            return il2cpp::get_nested_class<app::Ambience_Processing__Class>(type_info, "Core", "Ambience", "Processing");
        }
        inline app::Ambience_Processing* create() {
            return il2cpp::create_object<app::Ambience_Processing>(get_class());
        }
    } // namespace Ambience_Processing
} // namespace app::classes::types
