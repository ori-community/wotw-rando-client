#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace LocalAppContextSwitches_1 {
        extern IL2CPP_MODLOADER_DLLEXPORT app::LocalAppContextSwitches_1__Class** type_info;
        inline app::LocalAppContextSwitches_1__Class* get_class() {
            return il2cpp::get_class<app::LocalAppContextSwitches_1__Class>(type_info, "System", "LocalAppContextSwitches");
        }
        inline app::LocalAppContextSwitches_1* create() {
            return il2cpp::create_object<app::LocalAppContextSwitches_1>(get_class());
        }
    } // namespace LocalAppContextSwitches_1
} // namespace app::classes::types
