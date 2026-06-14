#pragma once
#include <Modloader/app/structs/TraversalBehaviour.h>
#include <Modloader/app/structs/TraversalBehaviour__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace TraversalBehaviour {
        inline app::TraversalBehaviour__Class** type_info() {
            static app::TraversalBehaviour__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::TraversalBehaviour__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::TraversalBehaviour__Class* get_class() {
            return il2cpp::get_class<app::TraversalBehaviour__Class>(type_info(), "", "TraversalBehaviour");
        }
        inline app::TraversalBehaviour* create() {
            return il2cpp::create_object<app::TraversalBehaviour>(get_class());
        }
    } // namespace TraversalBehaviour
} // namespace app::classes::types
