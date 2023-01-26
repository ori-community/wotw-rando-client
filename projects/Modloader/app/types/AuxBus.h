#pragma once
#include <Modloader/app/structs/AuxBus.h>
#include <Modloader/app/structs/AuxBus__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace AuxBus {
        inline app::AuxBus__Class** type_info() {
            static app::AuxBus__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::AuxBus__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::AuxBus__Class* get_class() {
            return il2cpp::get_class<app::AuxBus__Class>(type_info(), "AK.Wwise", "AuxBus");
        }
        inline app::AuxBus* create() {
            return il2cpp::create_object<app::AuxBus>(get_class());
        }
    } // namespace AuxBus
} // namespace app::classes::types
