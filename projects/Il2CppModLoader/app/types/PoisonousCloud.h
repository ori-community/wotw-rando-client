#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace PoisonousCloud {
        namespace {
            app::PoisonousCloud__Class* type_info_ref = nullptr;
        }
        app::PoisonousCloud__Class** type_info = &type_info_ref;
        inline app::PoisonousCloud__Class* get_class() {
            return il2cpp::get_class<app::PoisonousCloud__Class>(type_info, "", "PoisonousCloud");
        }
        inline app::PoisonousCloud* create() {
            return il2cpp::create_object<app::PoisonousCloud>(get_class());
        }
    } // namespace PoisonousCloud
} // namespace app::classes::types
