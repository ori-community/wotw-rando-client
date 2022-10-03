#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace TplEtwProvider {
        extern IL2CPP_MODLOADER_DLLEXPORT app::TplEtwProvider__Class** type_info;
        inline app::TplEtwProvider__Class* get_class() {
            return il2cpp::get_class<app::TplEtwProvider__Class>(type_info, "System.Diagnostics.Tracing", "TplEtwProvider");
        }
        inline app::TplEtwProvider* create() {
            return il2cpp::create_object<app::TplEtwProvider>(get_class());
        }
    } // namespace TplEtwProvider
} // namespace app::classes::types
