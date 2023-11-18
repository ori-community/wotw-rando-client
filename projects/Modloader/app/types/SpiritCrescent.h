#pragma once
#include <Modloader/app/structs/SpiritCrescent.h>
#include <Modloader/app/structs/SpiritCrescent__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SpiritCrescent {
        inline app::SpiritCrescent__Class** type_info() {
            static app::SpiritCrescent__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::SpiritCrescent__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::SpiritCrescent__Class* get_class() {
            return il2cpp::get_class<app::SpiritCrescent__Class>(type_info(), "", "SpiritCrescent");
        }
        inline app::SpiritCrescent* create() {
            return il2cpp::create_object<app::SpiritCrescent>(get_class());
        }
    } // namespace SpiritCrescent
} // namespace app::classes::types
