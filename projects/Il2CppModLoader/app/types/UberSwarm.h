#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace UberSwarm {
        namespace {
            app::UberSwarm__Class* type_info_ref = nullptr;
        }
        app::UberSwarm__Class** type_info = &type_info_ref;
        inline app::UberSwarm__Class* get_class() {
            return il2cpp::get_class<app::UberSwarm__Class>(type_info, "", "UberSwarm");
        }
        inline app::UberSwarm* create() {
            return il2cpp::create_object<app::UberSwarm>(get_class());
        }
    } // namespace UberSwarm
} // namespace app::classes::types
