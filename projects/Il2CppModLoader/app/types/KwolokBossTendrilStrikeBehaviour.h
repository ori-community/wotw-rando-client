#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace KwolokBossTendrilStrikeBehaviour {
        namespace {
            app::KwolokBossTendrilStrikeBehaviour__Class* type_info_ref = nullptr;
        }
        app::KwolokBossTendrilStrikeBehaviour__Class** type_info = &type_info_ref;
        inline app::KwolokBossTendrilStrikeBehaviour__Class* get_class() {
            return il2cpp::get_class<app::KwolokBossTendrilStrikeBehaviour__Class>(type_info, "", "KwolokBossTendrilStrikeBehaviour");
        }
        inline app::KwolokBossTendrilStrikeBehaviour* create() {
            return il2cpp::create_object<app::KwolokBossTendrilStrikeBehaviour>(get_class());
        }
    } // namespace KwolokBossTendrilStrikeBehaviour
} // namespace app::classes::types
