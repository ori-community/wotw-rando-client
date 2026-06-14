#pragma once
#include <Modloader/app/structs/KwolokBossMeleeSlapBehaviour.h>
#include <Modloader/app/structs/KwolokBossMeleeSlapBehaviour__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace KwolokBossMeleeSlapBehaviour {
        inline app::KwolokBossMeleeSlapBehaviour__Class** type_info() {
            static app::KwolokBossMeleeSlapBehaviour__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::KwolokBossMeleeSlapBehaviour__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::KwolokBossMeleeSlapBehaviour__Class* get_class() {
            return il2cpp::get_class<app::KwolokBossMeleeSlapBehaviour__Class>(type_info(), "", "KwolokBossMeleeSlapBehaviour");
        }
        inline app::KwolokBossMeleeSlapBehaviour* create() {
            return il2cpp::create_object<app::KwolokBossMeleeSlapBehaviour>(get_class());
        }
    } // namespace KwolokBossMeleeSlapBehaviour
} // namespace app::classes::types
