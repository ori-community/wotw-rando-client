#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace SeinPlaceholder {
        extern IL2CPP_MODLOADER_DLLEXPORT app::SeinPlaceholder__Class** type_info;
        inline app::SeinPlaceholder__Class* get_class() {
            return il2cpp::get_class<app::SeinPlaceholder__Class>(type_info, "", "SeinPlaceholder");
        }
        inline app::SeinPlaceholder* create() {
            return il2cpp::create_object<app::SeinPlaceholder>(get_class());
        }
    } // namespace SeinPlaceholder
} // namespace app::classes::types
