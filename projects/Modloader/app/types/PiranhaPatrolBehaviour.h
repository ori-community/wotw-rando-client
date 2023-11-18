#pragma once
#include <Modloader/app/structs/PiranhaPatrolBehaviour.h>
#include <Modloader/app/structs/PiranhaPatrolBehaviour__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace PiranhaPatrolBehaviour {
        inline app::PiranhaPatrolBehaviour__Class** type_info() {
            static app::PiranhaPatrolBehaviour__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::PiranhaPatrolBehaviour__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::PiranhaPatrolBehaviour__Class* get_class() {
            return il2cpp::get_class<app::PiranhaPatrolBehaviour__Class>(type_info(), "", "PiranhaPatrolBehaviour");
        }
        inline app::PiranhaPatrolBehaviour* create() {
            return il2cpp::create_object<app::PiranhaPatrolBehaviour>(get_class());
        }
    } // namespace PiranhaPatrolBehaviour
} // namespace app::classes::types
