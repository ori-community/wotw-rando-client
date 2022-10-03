#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace Tentacle {
        namespace {
            app::Tentacle__Class* type_info_ref = nullptr;
        }
        app::Tentacle__Class** type_info = &type_info_ref;
        inline app::Tentacle__Class* get_class() {
            return il2cpp::get_class<app::Tentacle__Class>(type_info, "", "Tentacle");
        }
        inline app::Tentacle* create() {
            return il2cpp::create_object<app::Tentacle>(get_class());
        }
    } // namespace Tentacle
} // namespace app::classes::types
