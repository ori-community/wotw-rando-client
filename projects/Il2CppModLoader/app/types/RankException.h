#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace RankException {
        extern IL2CPP_MODLOADER_DLLEXPORT app::RankException__Class** type_info;
        inline app::RankException__Class* get_class() {
            return il2cpp::get_class<app::RankException__Class>(type_info, "System", "RankException");
        }
        inline app::RankException* create() {
            return il2cpp::create_object<app::RankException>(get_class());
        }
    } // namespace RankException
} // namespace app::classes::types
