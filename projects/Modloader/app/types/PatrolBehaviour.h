#pragma once
#include <Modloader/app/structs/PatrolBehaviour.h>
#include <Modloader/app/structs/PatrolBehaviour__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace PatrolBehaviour {
        inline app::PatrolBehaviour__Class** type_info() {
            static app::PatrolBehaviour__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::PatrolBehaviour__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::PatrolBehaviour__Class* get_class() {
            return il2cpp::get_class<app::PatrolBehaviour__Class>(type_info(), "Moon", "PatrolBehaviour");
        }
        inline app::PatrolBehaviour* create() {
            return il2cpp::create_object<app::PatrolBehaviour>(get_class());
        }
    } // namespace PatrolBehaviour
} // namespace app::classes::types
