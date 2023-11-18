#pragma once
#include <Modloader/app/structs/GroundChaseBehaviour.h>
#include <Modloader/app/structs/GroundChaseBehaviour__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace GroundChaseBehaviour {
        inline app::GroundChaseBehaviour__Class** type_info() {
            static app::GroundChaseBehaviour__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::GroundChaseBehaviour__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::GroundChaseBehaviour__Class* get_class() {
            return il2cpp::get_class<app::GroundChaseBehaviour__Class>(type_info(), "", "GroundChaseBehaviour");
        }
        inline app::GroundChaseBehaviour* create() {
            return il2cpp::create_object<app::GroundChaseBehaviour>(get_class());
        }
    } // namespace GroundChaseBehaviour
} // namespace app::classes::types
