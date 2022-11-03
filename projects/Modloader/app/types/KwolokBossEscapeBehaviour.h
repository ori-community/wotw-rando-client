#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace KwolokBossEscapeBehaviour {
        namespace {
            inline app::KwolokBossEscapeBehaviour__Class* type_info_ref = nullptr;
        }
        inline app::KwolokBossEscapeBehaviour__Class** type_info = &type_info_ref;
        inline app::KwolokBossEscapeBehaviour__Class* get_class() {
            return il2cpp::get_class<app::KwolokBossEscapeBehaviour__Class>(type_info, "", "KwolokBossEscapeBehaviour");
        }
        inline app::KwolokBossEscapeBehaviour* create() {
            return il2cpp::create_object<app::KwolokBossEscapeBehaviour>(get_class());
        }
    } // namespace KwolokBossEscapeBehaviour
} // namespace app::classes::types
