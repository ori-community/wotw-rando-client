#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace Trap {
        namespace {
            app::Trap__Class* type_info_ref = nullptr;
        }
        app::Trap__Class** type_info = &type_info_ref;
        inline app::Trap__Class* get_class() {
            return il2cpp::get_class<app::Trap__Class>(type_info, "", "Trap");
        }
        inline app::Trap* create() {
            return il2cpp::create_object<app::Trap>(get_class());
        }
    } // namespace Trap
} // namespace app::classes::types
