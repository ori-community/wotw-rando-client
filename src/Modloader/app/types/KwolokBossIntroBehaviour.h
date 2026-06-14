#pragma once
#include <Modloader/app/structs/KwolokBossIntroBehaviour.h>
#include <Modloader/app/structs/KwolokBossIntroBehaviour__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace KwolokBossIntroBehaviour {
        inline app::KwolokBossIntroBehaviour__Class** type_info() {
            static app::KwolokBossIntroBehaviour__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::KwolokBossIntroBehaviour__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::KwolokBossIntroBehaviour__Class* get_class() {
            return il2cpp::get_class<app::KwolokBossIntroBehaviour__Class>(type_info(), "", "KwolokBossIntroBehaviour");
        }
        inline app::KwolokBossIntroBehaviour* create() {
            return il2cpp::create_object<app::KwolokBossIntroBehaviour>(get_class());
        }
    } // namespace KwolokBossIntroBehaviour
} // namespace app::classes::types
