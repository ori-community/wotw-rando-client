#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace KwolokBossEscapeBehaviour {
        namespace {
            app::KwolokBossEscapeBehaviour__Class* type_info_ref = nullptr;
        }
        app::KwolokBossEscapeBehaviour__Class** type_info = &type_info_ref;
        inline app::KwolokBossEscapeBehaviour__Class* get_class() {
            return il2cpp::get_class<app::KwolokBossEscapeBehaviour__Class>(type_info, "", "KwolokBossEscapeBehaviour");
        }
        inline app::KwolokBossEscapeBehaviour* create() {
            return il2cpp::create_object<app::KwolokBossEscapeBehaviour>(get_class());
        }
    } // namespace KwolokBossEscapeBehaviour
} // namespace app::classes::types
