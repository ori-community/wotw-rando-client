#pragma once
#include <Modloader/app/structs/KwolokBossBaseBehaviour__Array.h>
#include <Modloader/app/structs/KwolokBossBaseBehaviour__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace KwolokBossBaseBehaviour__Array {
        inline app::KwolokBossBaseBehaviour__Array__Class** type_info() {
            static app::KwolokBossBaseBehaviour__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::KwolokBossBaseBehaviour__Array__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::KwolokBossBaseBehaviour__Array__Class* get_class() {
            return il2cpp::get_class<app::KwolokBossBaseBehaviour__Array__Class>(type_info(), "", "KwolokBossBaseBehaviour[]");
        }
        inline app::KwolokBossBaseBehaviour__Array* create() {
            return il2cpp::create_object<app::KwolokBossBaseBehaviour__Array>(get_class());
        }
    } // namespace KwolokBossBaseBehaviour__Array
} // namespace app::classes::types
