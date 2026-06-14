#pragma once
#include <Modloader/app/structs/RockExplodeZone__Array.h>
#include <Modloader/app/structs/RockExplodeZone__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace RockExplodeZone__Array {
        inline app::RockExplodeZone__Array__Class** type_info() {
            static app::RockExplodeZone__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::RockExplodeZone__Array__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::RockExplodeZone__Array__Class* get_class() {
            return il2cpp::get_class<app::RockExplodeZone__Array__Class>(type_info(), "", "RockExplodeZone[]");
        }
        inline app::RockExplodeZone__Array* create() {
            return il2cpp::create_object<app::RockExplodeZone__Array>(get_class());
        }
    } // namespace RockExplodeZone__Array
} // namespace app::classes::types
