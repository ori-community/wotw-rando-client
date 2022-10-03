#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace MoonSwarm {
        namespace {
            app::MoonSwarm__Class* type_info_ref = nullptr;
        }
        app::MoonSwarm__Class** type_info = &type_info_ref;
        inline app::MoonSwarm__Class* get_class() {
            return il2cpp::get_class<app::MoonSwarm__Class>(type_info, "", "MoonSwarm");
        }
        inline app::MoonSwarm* create() {
            return il2cpp::create_object<app::MoonSwarm>(get_class());
        }
    } // namespace MoonSwarm
} // namespace app::classes::types
