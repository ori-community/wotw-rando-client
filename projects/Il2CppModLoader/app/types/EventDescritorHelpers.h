#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace EventDescritorHelpers {
        extern IL2CPP_MODLOADER_DLLEXPORT app::EventDescritorHelpers__Class** type_info;
        inline app::EventDescritorHelpers__Class* get_class() {
            return il2cpp::get_class<app::EventDescritorHelpers__Class>(type_info, "Moon.Timeline", "EventDescritorHelpers");
        }
        inline app::EventDescritorHelpers* create() {
            return il2cpp::create_object<app::EventDescritorHelpers>(get_class());
        }
    } // namespace EventDescritorHelpers
} // namespace app::classes::types
