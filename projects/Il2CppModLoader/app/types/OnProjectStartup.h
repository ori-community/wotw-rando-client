#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace OnProjectStartup {
        namespace {
            app::OnProjectStartup__Class* type_info_ref = nullptr;
        }
        app::OnProjectStartup__Class** type_info = &type_info_ref;
        inline app::OnProjectStartup__Class* get_class() {
            return il2cpp::get_class<app::OnProjectStartup__Class>(type_info, "", "OnProjectStartup");
        }
        inline app::OnProjectStartup* create() {
            return il2cpp::create_object<app::OnProjectStartup>(get_class());
        }
    } // namespace OnProjectStartup
} // namespace app::classes::types
