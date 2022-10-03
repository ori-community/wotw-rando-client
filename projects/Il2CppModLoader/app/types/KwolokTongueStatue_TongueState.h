#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace KwolokTongueStatue_TongueState {
        extern IL2CPP_MODLOADER_DLLEXPORT app::KwolokTongueStatue_TongueState__Class** type_info;
        inline app::KwolokTongueStatue_TongueState__Class* get_class() {
            return il2cpp::get_nested_class<app::KwolokTongueStatue_TongueState__Class>(type_info, "", "KwolokTongueStatue", "TongueState");
        }
        inline app::KwolokTongueStatue_TongueState* create() {
            return il2cpp::create_object<app::KwolokTongueStatue_TongueState>(get_class());
        }
    } // namespace KwolokTongueStatue_TongueState
} // namespace app::classes::types
