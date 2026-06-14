#pragma once
#include <Modloader/app/structs/SpiderlingLocomotionMoveBehaviour.h>
#include <Modloader/app/structs/SpiderlingLocomotionMoveBehaviour__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SpiderlingLocomotionMoveBehaviour {
        inline app::SpiderlingLocomotionMoveBehaviour__Class** type_info() {
            static app::SpiderlingLocomotionMoveBehaviour__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::SpiderlingLocomotionMoveBehaviour__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::SpiderlingLocomotionMoveBehaviour__Class* get_class() {
            return il2cpp::get_class<app::SpiderlingLocomotionMoveBehaviour__Class>(type_info(), "", "SpiderlingLocomotionMoveBehaviour");
        }
        inline app::SpiderlingLocomotionMoveBehaviour* create() {
            return il2cpp::create_object<app::SpiderlingLocomotionMoveBehaviour>(get_class());
        }
    } // namespace SpiderlingLocomotionMoveBehaviour
} // namespace app::classes::types
