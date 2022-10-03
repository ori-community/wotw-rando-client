#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace GennadiysDice {
        extern IL2CPP_MODLOADER_DLLEXPORT app::GennadiysDice__Class** type_info;
        inline app::GennadiysDice__Class* get_class() {
            return il2cpp::get_class<app::GennadiysDice__Class>(type_info, "Moon.Timeline", "GennadiysDice");
        }
        inline app::GennadiysDice* create() {
            return il2cpp::create_object<app::GennadiysDice>(get_class());
        }
    } // namespace GennadiysDice
} // namespace app::classes::types
