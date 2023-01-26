#pragma once
#include <Modloader/app/structs/SeinSpiritFlameTargetting.h>
#include <Modloader/app/structs/SeinSpiritFlameTargetting__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SeinSpiritFlameTargetting {
        inline app::SeinSpiritFlameTargetting__Class** type_info() {
            static app::SeinSpiritFlameTargetting__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::SeinSpiritFlameTargetting__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::SeinSpiritFlameTargetting__Class* get_class() {
            return il2cpp::get_class<app::SeinSpiritFlameTargetting__Class>(type_info(), "", "SeinSpiritFlameTargetting");
        }
        inline app::SeinSpiritFlameTargetting* create() {
            return il2cpp::create_object<app::SeinSpiritFlameTargetting>(get_class());
        }
    } // namespace SeinSpiritFlameTargetting
} // namespace app::classes::types
