#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace SeinWorldState {
        extern IL2CPP_MODLOADER_DLLEXPORT app::SeinWorldState__Class** type_info;
        inline app::SeinWorldState__Class* get_class() {
            return il2cpp::get_class<app::SeinWorldState__Class>(type_info, "", "SeinWorldState");
        }
        inline app::SeinWorldState* create() {
            return il2cpp::create_object<app::SeinWorldState>(get_class());
        }
    } // namespace SeinWorldState
} // namespace app::classes::types
