#pragma once
#include <Modloader/app/structs/ChargeFlameBurst.h>
#include <Modloader/app/structs/ChargeFlameBurst__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ChargeFlameBurst {
        inline app::ChargeFlameBurst__Class** type_info() {
            static app::ChargeFlameBurst__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::ChargeFlameBurst__Class**)(modloader::win::memory::resolve_rva(0x04728558));
            }
            return cache;
        }
        inline app::ChargeFlameBurst__Class* get_class() {
            return il2cpp::get_class<app::ChargeFlameBurst__Class>(type_info(), "", "ChargeFlameBurst");
        }
        inline app::ChargeFlameBurst* create() {
            return il2cpp::create_object<app::ChargeFlameBurst>(get_class());
        }
    } // namespace ChargeFlameBurst
} // namespace app::classes::types
