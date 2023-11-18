#pragma once
#include <Modloader/app/structs/ChaseBehaviour.h>
#include <Modloader/app/structs/ChaseBehaviour__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ChaseBehaviour {
        inline app::ChaseBehaviour__Class** type_info() {
            static app::ChaseBehaviour__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::ChaseBehaviour__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::ChaseBehaviour__Class* get_class() {
            return il2cpp::get_class<app::ChaseBehaviour__Class>(type_info(), "Moon", "ChaseBehaviour");
        }
        inline app::ChaseBehaviour* create() {
            return il2cpp::create_object<app::ChaseBehaviour>(get_class());
        }
    } // namespace ChaseBehaviour
} // namespace app::classes::types
