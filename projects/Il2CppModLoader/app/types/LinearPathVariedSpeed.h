#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace LinearPathVariedSpeed {
        namespace {
            app::LinearPathVariedSpeed__Class* type_info_ref = nullptr;
        }
        app::LinearPathVariedSpeed__Class** type_info = &type_info_ref;
        inline app::LinearPathVariedSpeed__Class* get_class() {
            return il2cpp::get_class<app::LinearPathVariedSpeed__Class>(type_info, "", "LinearPathVariedSpeed");
        }
        inline app::LinearPathVariedSpeed* create() {
            return il2cpp::create_object<app::LinearPathVariedSpeed>(get_class());
        }
    } // namespace LinearPathVariedSpeed
} // namespace app::classes::types
