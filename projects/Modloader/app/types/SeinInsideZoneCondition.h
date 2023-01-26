#pragma once
#include <Modloader/app/structs/SeinInsideZoneCondition.h>
#include <Modloader/app/structs/SeinInsideZoneCondition__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SeinInsideZoneCondition {
        inline app::SeinInsideZoneCondition__Class** type_info() {
            static app::SeinInsideZoneCondition__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::SeinInsideZoneCondition__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::SeinInsideZoneCondition__Class* get_class() {
            return il2cpp::get_class<app::SeinInsideZoneCondition__Class>(type_info(), "", "SeinInsideZoneCondition");
        }
        inline app::SeinInsideZoneCondition* create() {
            return il2cpp::create_object<app::SeinInsideZoneCondition>(get_class());
        }
    } // namespace SeinInsideZoneCondition
} // namespace app::classes::types
