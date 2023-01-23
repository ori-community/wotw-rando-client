#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/KwolokBossTendrilStrikeBehaviour__Class.h>
#include <Modloader/app/structs/KwolokBossTendrilStrikeBehaviour.h>

namespace app::classes::types {
    namespace KwolokBossTendrilStrikeBehaviour {
        namespace {
            inline app::KwolokBossTendrilStrikeBehaviour__Class* type_info_ref = nullptr;
        }
        inline app::KwolokBossTendrilStrikeBehaviour__Class** type_info = &type_info_ref;
        inline app::KwolokBossTendrilStrikeBehaviour__Class* get_class() {
            return il2cpp::get_class<app::KwolokBossTendrilStrikeBehaviour__Class>(type_info, "", "KwolokBossTendrilStrikeBehaviour");
        }
        inline app::KwolokBossTendrilStrikeBehaviour* create() {
            return il2cpp::create_object<app::KwolokBossTendrilStrikeBehaviour>(get_class());
        }
    } // namespace KwolokBossTendrilStrikeBehaviour
} // namespace app::classes::types
