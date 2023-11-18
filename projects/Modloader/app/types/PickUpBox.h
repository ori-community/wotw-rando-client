#pragma once
#include <Modloader/app/structs/PickUpBox.h>
#include <Modloader/app/structs/PickUpBox__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace PickUpBox {
        inline app::PickUpBox__Class** type_info() {
            static app::PickUpBox__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::PickUpBox__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::PickUpBox__Class* get_class() {
            return il2cpp::get_class<app::PickUpBox__Class>(type_info(), "RootMotion.Demos", "PickUpBox");
        }
        inline app::PickUpBox* create() {
            return il2cpp::create_object<app::PickUpBox>(get_class());
        }
    } // namespace PickUpBox
} // namespace app::classes::types
