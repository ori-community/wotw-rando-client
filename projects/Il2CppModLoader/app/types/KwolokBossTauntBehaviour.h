#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace KwolokBossTauntBehaviour {
        namespace {
            app::KwolokBossTauntBehaviour__Class* type_info_ref = nullptr;
        }
        app::KwolokBossTauntBehaviour__Class** type_info = &type_info_ref;
        inline app::KwolokBossTauntBehaviour__Class* get_class() {
            return il2cpp::get_class<app::KwolokBossTauntBehaviour__Class>(type_info, "", "KwolokBossTauntBehaviour");
        }
        inline app::KwolokBossTauntBehaviour* create() {
            return il2cpp::create_object<app::KwolokBossTauntBehaviour>(get_class());
        }
    } // namespace KwolokBossTauntBehaviour
} // namespace app::classes::types
