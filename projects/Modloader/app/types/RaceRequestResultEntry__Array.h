#pragma once
#include <Modloader/app/structs/RaceRequestResultEntry__Array.h>
#include <Modloader/app/structs/RaceRequestResultEntry__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace RaceRequestResultEntry__Array {
        inline app::RaceRequestResultEntry__Array__Class** type_info() {
            static app::RaceRequestResultEntry__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::RaceRequestResultEntry__Array__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::RaceRequestResultEntry__Array__Class* get_class() {
            return il2cpp::get_class<app::RaceRequestResultEntry__Array__Class>(type_info(), "SystemIntegration.Races", "RaceRequestResultEntry[]");
        }
        inline app::RaceRequestResultEntry__Array* create() {
            return il2cpp::create_object<app::RaceRequestResultEntry__Array>(get_class());
        }
    } // namespace RaceRequestResultEntry__Array
} // namespace app::classes::types
