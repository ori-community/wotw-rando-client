#pragma once
#include <Modloader/app/structs/SinMovement.h>
#include <Modloader/app/structs/SinMovement__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SinMovement {
        inline app::SinMovement__Class** type_info() {
            static app::SinMovement__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::SinMovement__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::SinMovement__Class* get_class() {
            return il2cpp::get_class<app::SinMovement__Class>(type_info(), "", "SinMovement");
        }
        inline app::SinMovement* create() {
            return il2cpp::create_object<app::SinMovement>(get_class());
        }
    } // namespace SinMovement
} // namespace app::classes::types
