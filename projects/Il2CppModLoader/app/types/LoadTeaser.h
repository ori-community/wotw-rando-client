#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace LoadTeaser {
        namespace {
            app::LoadTeaser__Class* type_info_ref = nullptr;
        }
        app::LoadTeaser__Class** type_info = &type_info_ref;
        inline app::LoadTeaser__Class* get_class() {
            return il2cpp::get_class<app::LoadTeaser__Class>(type_info, "", "LoadTeaser");
        }
        inline app::LoadTeaser* create() {
            return il2cpp::create_object<app::LoadTeaser>(get_class());
        }
    } // namespace LoadTeaser
} // namespace app::classes::types
