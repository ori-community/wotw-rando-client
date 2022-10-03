#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace X520 {
        namespace {
            app::X520__Class* type_info_ref = nullptr;
        }
        app::X520__Class** type_info = &type_info_ref;
        inline app::X520__Class* get_class() {
            return il2cpp::get_class<app::X520__Class>(type_info, "Mono.Security.X509", "X520");
        }
        inline app::X520* create() {
            return il2cpp::create_object<app::X520>(get_class());
        }
    } // namespace X520
} // namespace app::classes::types
