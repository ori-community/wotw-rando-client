#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace UberUIPostProcess {
        extern IL2CPP_MODLOADER_DLLEXPORT app::UberUIPostProcess__Class** type_info;
        inline app::UberUIPostProcess__Class* get_class() {
            return il2cpp::get_class<app::UberUIPostProcess__Class>(type_info, "", "UberUIPostProcess");
        }
        inline app::UberUIPostProcess* create() {
            return il2cpp::create_object<app::UberUIPostProcess>(get_class());
        }
    } // namespace UberUIPostProcess
} // namespace app::classes::types
