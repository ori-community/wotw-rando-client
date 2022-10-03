#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace Varying2DSoundProvider {
        extern IL2CPP_MODLOADER_DLLEXPORT app::Varying2DSoundProvider__Class** type_info;
        inline app::Varying2DSoundProvider__Class* get_class() {
            return il2cpp::get_class<app::Varying2DSoundProvider__Class>(type_info, "", "Varying2DSoundProvider");
        }
        inline app::Varying2DSoundProvider* create() {
            return il2cpp::create_object<app::Varying2DSoundProvider>(get_class());
        }
    } // namespace Varying2DSoundProvider
} // namespace app::classes::types
