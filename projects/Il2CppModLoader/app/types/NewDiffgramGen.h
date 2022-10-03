#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace NewDiffgramGen {
        extern IL2CPP_MODLOADER_DLLEXPORT app::NewDiffgramGen__Class** type_info;
        inline app::NewDiffgramGen__Class* get_class() {
            return il2cpp::get_class<app::NewDiffgramGen__Class>(type_info, "System.Data", "NewDiffgramGen");
        }
        inline app::NewDiffgramGen* create() {
            return il2cpp::create_object<app::NewDiffgramGen>(get_class());
        }
    } // namespace NewDiffgramGen
} // namespace app::classes::types
