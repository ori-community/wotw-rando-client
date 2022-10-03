#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace TestSetManager {
        extern IL2CPP_MODLOADER_DLLEXPORT app::TestSetManager__Class** type_info;
        inline app::TestSetManager__Class* get_class() {
            return il2cpp::get_class<app::TestSetManager__Class>(type_info, "", "TestSetManager");
        }
        inline app::TestSetManager* create() {
            return il2cpp::create_object<app::TestSetManager>(get_class());
        }
    } // namespace TestSetManager
} // namespace app::classes::types
