#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace DesigntimeLicenseContext {
        extern IL2CPP_MODLOADER_DLLEXPORT app::DesigntimeLicenseContext__Class** type_info;
        inline app::DesigntimeLicenseContext__Class* get_class() {
            return il2cpp::get_class<app::DesigntimeLicenseContext__Class>(type_info, "System.ComponentModel.Design", "DesigntimeLicenseContext");
        }
        inline app::DesigntimeLicenseContext* create() {
            return il2cpp::create_object<app::DesigntimeLicenseContext>(get_class());
        }
    } // namespace DesigntimeLicenseContext
} // namespace app::classes::types
