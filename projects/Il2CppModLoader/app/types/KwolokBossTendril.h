#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace KwolokBossTendril {
        namespace {
            app::KwolokBossTendril__Class* type_info_ref = nullptr;
        }
        app::KwolokBossTendril__Class** type_info = &type_info_ref;
        inline app::KwolokBossTendril__Class* get_class() {
            return il2cpp::get_class<app::KwolokBossTendril__Class>(type_info, "", "KwolokBossTendril");
        }
        inline app::KwolokBossTendril* create() {
            return il2cpp::create_object<app::KwolokBossTendril>(get_class());
        }
    } // namespace KwolokBossTendril
} // namespace app::classes::types
