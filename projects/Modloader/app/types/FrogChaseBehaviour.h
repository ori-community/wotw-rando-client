#pragma once
#include <Modloader/app/structs/FrogChaseBehaviour.h>
#include <Modloader/app/structs/FrogChaseBehaviour__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace FrogChaseBehaviour {
        inline app::FrogChaseBehaviour__Class** type_info() {
            static app::FrogChaseBehaviour__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::FrogChaseBehaviour__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::FrogChaseBehaviour__Class* get_class() {
            return il2cpp::get_class<app::FrogChaseBehaviour__Class>(type_info(), "", "FrogChaseBehaviour");
        }
        inline app::FrogChaseBehaviour* create() {
            return il2cpp::create_object<app::FrogChaseBehaviour>(get_class());
        }
    } // namespace FrogChaseBehaviour
} // namespace app::classes::types
