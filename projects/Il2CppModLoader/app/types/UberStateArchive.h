#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace UberStateArchive {
        extern IL2CPP_MODLOADER_DLLEXPORT app::UberStateArchive__Class** type_info;
        inline app::UberStateArchive__Class* get_class() {
            return il2cpp::get_class<app::UberStateArchive__Class>(type_info, "", "UberStateArchive");
        }
        inline app::UberStateArchive* create() {
            return il2cpp::create_object<app::UberStateArchive>(get_class());
        }
    } // namespace UberStateArchive
} // namespace app::classes::types
