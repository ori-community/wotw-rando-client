#pragma once
#include <Modloader/app/structs/RaceDataCache__Array.h>
#include <Modloader/app/structs/RaceDataCache__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace RaceDataCache__Array {
        inline app::RaceDataCache__Array__Class** type_info() {
            static app::RaceDataCache__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::RaceDataCache__Array__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::RaceDataCache__Array__Class* get_class() {
            return il2cpp::get_class<app::RaceDataCache__Array__Class>(type_info(), "SystemIntegration.Races", "RaceDataCache[]");
        }
        inline app::RaceDataCache__Array* create() {
            return il2cpp::create_object<app::RaceDataCache__Array>(get_class());
        }
    } // namespace RaceDataCache__Array
} // namespace app::classes::types
