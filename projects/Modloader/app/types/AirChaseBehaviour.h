#pragma once
#include <Modloader/app/structs/AirChaseBehaviour.h>
#include <Modloader/app/structs/AirChaseBehaviour__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace AirChaseBehaviour {
        inline app::AirChaseBehaviour__Class** type_info() {
            static app::AirChaseBehaviour__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::AirChaseBehaviour__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::AirChaseBehaviour__Class* get_class() {
            return il2cpp::get_class<app::AirChaseBehaviour__Class>(type_info(), "Moon", "AirChaseBehaviour");
        }
        inline app::AirChaseBehaviour* create() {
            return il2cpp::create_object<app::AirChaseBehaviour>(get_class());
        }
    } // namespace AirChaseBehaviour
} // namespace app::classes::types
