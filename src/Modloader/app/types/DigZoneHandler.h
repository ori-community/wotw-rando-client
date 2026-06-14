#pragma once
#include <Modloader/app/structs/DigZoneHandler.h>
#include <Modloader/app/structs/DigZoneHandler__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace DigZoneHandler {
        inline app::DigZoneHandler__Class** type_info() {
            static app::DigZoneHandler__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::DigZoneHandler__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::DigZoneHandler__Class* get_class() {
            return il2cpp::get_class<app::DigZoneHandler__Class>(type_info(), "Moon", "DigZoneHandler");
        }
        inline app::DigZoneHandler* create() {
            return il2cpp::create_object<app::DigZoneHandler>(get_class());
        }
    } // namespace DigZoneHandler
} // namespace app::classes::types
