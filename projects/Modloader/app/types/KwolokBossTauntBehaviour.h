#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/KwolokBossTauntBehaviour__Class.h>
#include <Modloader/app/structs/KwolokBossTauntBehaviour.h>

namespace app::classes::types {
    namespace KwolokBossTauntBehaviour {
        namespace {
            inline app::KwolokBossTauntBehaviour__Class* type_info_ref = nullptr;
        }
        inline app::KwolokBossTauntBehaviour__Class** type_info = &type_info_ref;
        inline app::KwolokBossTauntBehaviour__Class* get_class() {
            return il2cpp::get_class<app::KwolokBossTauntBehaviour__Class>(type_info, "", "KwolokBossTauntBehaviour");
        }
        inline app::KwolokBossTauntBehaviour* create() {
            return il2cpp::create_object<app::KwolokBossTauntBehaviour>(get_class());
        }
    } // namespace KwolokBossTauntBehaviour
} // namespace app::classes::types
