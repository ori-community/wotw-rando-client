#pragma once
#include <Modloader/app/structs/RaceEntry__Array.h>
#include <Modloader/app/structs/RaceEntry__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace RaceEntry__Array {
        inline app::RaceEntry__Array__Class** type_info() {
            static app::RaceEntry__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::RaceEntry__Array__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::RaceEntry__Array__Class* get_class() {
            return il2cpp::get_class<app::RaceEntry__Array__Class>(type_info(), "SystemIntegration.Races", "RaceEntry[]");
        }
        inline app::RaceEntry__Array* create() {
            return il2cpp::create_object<app::RaceEntry__Array>(get_class());
        }
    } // namespace RaceEntry__Array
} // namespace app::classes::types
