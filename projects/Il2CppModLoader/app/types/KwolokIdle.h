#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace KwolokIdle {
        namespace {
            app::KwolokIdle__Class* type_info_ref = nullptr;
        }
        app::KwolokIdle__Class** type_info = &type_info_ref;
        inline app::KwolokIdle__Class* get_class() {
            return il2cpp::get_class<app::KwolokIdle__Class>(type_info, "", "KwolokIdle");
        }
        inline app::KwolokIdle* create() {
            return il2cpp::create_object<app::KwolokIdle>(get_class());
        }
    } // namespace KwolokIdle
} // namespace app::classes::types
