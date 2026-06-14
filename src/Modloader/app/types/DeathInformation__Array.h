#pragma once
#include <Modloader/app/structs/DeathInformation__Array.h>
#include <Modloader/app/structs/DeathInformation__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace DeathInformation__Array {
        inline app::DeathInformation__Array__Class** type_info() {
            static app::DeathInformation__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::DeathInformation__Array__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::DeathInformation__Array__Class* get_class() {
            return il2cpp::get_class<app::DeathInformation__Array__Class>(type_info(), "", "DeathInformation[]");
        }
        inline app::DeathInformation__Array* create() {
            return il2cpp::create_object<app::DeathInformation__Array>(get_class());
        }
    } // namespace DeathInformation__Array
} // namespace app::classes::types
