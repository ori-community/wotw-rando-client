#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace Match_1 {
        extern IL2CPP_MODLOADER_DLLEXPORT app::Match_1__Class** type_info;
        inline app::Match_1__Class* get_class() {
            return il2cpp::get_class<app::Match_1__Class>(type_info, "Unity.IO.Compression", "Match");
        }
        inline app::Match_1* create() {
            return il2cpp::create_object<app::Match_1>(get_class());
        }
    } // namespace Match_1
} // namespace app::classes::types
