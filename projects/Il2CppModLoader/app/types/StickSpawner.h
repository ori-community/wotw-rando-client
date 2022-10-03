#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace StickSpawner {
        namespace {
            app::StickSpawner__Class* type_info_ref = nullptr;
        }
        app::StickSpawner__Class** type_info = &type_info_ref;
        inline app::StickSpawner__Class* get_class() {
            return il2cpp::get_class<app::StickSpawner__Class>(type_info, "Moon", "StickSpawner");
        }
        inline app::StickSpawner* create() {
            return il2cpp::create_object<app::StickSpawner>(get_class());
        }
    } // namespace StickSpawner
} // namespace app::classes::types
