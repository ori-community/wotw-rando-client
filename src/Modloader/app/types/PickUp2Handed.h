#pragma once
#include <Modloader/app/structs/PickUp2Handed.h>
#include <Modloader/app/structs/PickUp2Handed__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace PickUp2Handed {
        inline app::PickUp2Handed__Class** type_info() {
            static app::PickUp2Handed__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::PickUp2Handed__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::PickUp2Handed__Class* get_class() {
            return il2cpp::get_class<app::PickUp2Handed__Class>(type_info(), "RootMotion.Demos", "PickUp2Handed");
        }
        inline app::PickUp2Handed* create() {
            return il2cpp::create_object<app::PickUp2Handed>(get_class());
        }
    } // namespace PickUp2Handed
} // namespace app::classes::types
