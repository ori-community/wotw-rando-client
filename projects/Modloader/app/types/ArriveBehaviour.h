#pragma once
#include <Modloader/app/structs/ArriveBehaviour.h>
#include <Modloader/app/structs/ArriveBehaviour__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ArriveBehaviour {
        inline app::ArriveBehaviour__Class** type_info() {
            static app::ArriveBehaviour__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::ArriveBehaviour__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::ArriveBehaviour__Class* get_class() {
            return il2cpp::get_class<app::ArriveBehaviour__Class>(type_info(), "Moon", "ArriveBehaviour");
        }
        inline app::ArriveBehaviour* create() {
            return il2cpp::create_object<app::ArriveBehaviour>(get_class());
        }
    } // namespace ArriveBehaviour
} // namespace app::classes::types
