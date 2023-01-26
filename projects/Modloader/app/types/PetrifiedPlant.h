#pragma once
#include <Modloader/app/structs/PetrifiedPlant.h>
#include <Modloader/app/structs/PetrifiedPlant__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace PetrifiedPlant {
        inline app::PetrifiedPlant__Class** type_info() {
            static app::PetrifiedPlant__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::PetrifiedPlant__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::PetrifiedPlant__Class* get_class() {
            return il2cpp::get_class<app::PetrifiedPlant__Class>(type_info(), "", "PetrifiedPlant");
        }
        inline app::PetrifiedPlant* create() {
            return il2cpp::create_object<app::PetrifiedPlant>(get_class());
        }
    } // namespace PetrifiedPlant
} // namespace app::classes::types
