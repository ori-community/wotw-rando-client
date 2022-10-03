#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace KwolokNpcEntity_c {
        extern IL2CPP_MODLOADER_DLLEXPORT app::KwolokNpcEntity_c__Class** type_info;
        inline app::KwolokNpcEntity_c__Class* get_class() {
            return il2cpp::get_nested_class<app::KwolokNpcEntity_c__Class>(type_info, "", "KwolokNpcEntity", "<>c");
        }
        inline app::KwolokNpcEntity_c* create() {
            return il2cpp::create_object<app::KwolokNpcEntity_c>(get_class());
        }
    } // namespace KwolokNpcEntity_c
} // namespace app::classes::types
