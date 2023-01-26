#pragma once
#include <Modloader/app/structs/KwolokBossSimpleLookAt.h>
#include <Modloader/app/structs/KwolokBossSimpleLookAt__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace KwolokBossSimpleLookAt {
        inline app::KwolokBossSimpleLookAt__Class** type_info() {
            static app::KwolokBossSimpleLookAt__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::KwolokBossSimpleLookAt__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::KwolokBossSimpleLookAt__Class* get_class() {
            return il2cpp::get_class<app::KwolokBossSimpleLookAt__Class>(type_info(), "", "KwolokBossSimpleLookAt");
        }
        inline app::KwolokBossSimpleLookAt* create() {
            return il2cpp::create_object<app::KwolokBossSimpleLookAt>(get_class());
        }
    } // namespace KwolokBossSimpleLookAt
} // namespace app::classes::types
