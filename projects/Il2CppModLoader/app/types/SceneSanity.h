#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace SceneSanity {
        namespace {
            app::SceneSanity__Class* type_info_ref = nullptr;
        }
        app::SceneSanity__Class** type_info = &type_info_ref;
        inline app::SceneSanity__Class* get_class() {
            return il2cpp::get_class<app::SceneSanity__Class>(type_info, "", "SceneSanity");
        }
        inline app::SceneSanity* create() {
            return il2cpp::create_object<app::SceneSanity>(get_class());
        }
    } // namespace SceneSanity
} // namespace app::classes::types
