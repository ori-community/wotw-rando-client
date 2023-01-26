#pragma once
#include <Modloader/app/structs/KwolokBossHeadbuttBehaviour.h>
#include <Modloader/app/structs/KwolokBossHeadbuttBehaviour__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace KwolokBossHeadbuttBehaviour {
        inline app::KwolokBossHeadbuttBehaviour__Class** type_info() {
            static app::KwolokBossHeadbuttBehaviour__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::KwolokBossHeadbuttBehaviour__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::KwolokBossHeadbuttBehaviour__Class* get_class() {
            return il2cpp::get_class<app::KwolokBossHeadbuttBehaviour__Class>(type_info(), "", "KwolokBossHeadbuttBehaviour");
        }
        inline app::KwolokBossHeadbuttBehaviour* create() {
            return il2cpp::create_object<app::KwolokBossHeadbuttBehaviour>(get_class());
        }
    } // namespace KwolokBossHeadbuttBehaviour
} // namespace app::classes::types
