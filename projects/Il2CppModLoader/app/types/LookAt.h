#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace LookAt {
        namespace {
            app::LookAt__Class* type_info_ref = nullptr;
        }
        app::LookAt__Class** type_info = &type_info_ref;
        inline app::LookAt__Class* get_class() {
            return il2cpp::get_class<app::LookAt__Class>(type_info, "", "LookAt");
        }
        inline app::LookAt* create() {
            return il2cpp::create_object<app::LookAt>(get_class());
        }
    } // namespace LookAt
} // namespace app::classes::types
