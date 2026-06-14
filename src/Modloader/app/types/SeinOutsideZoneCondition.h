#pragma once
#include <Modloader/app/structs/SeinOutsideZoneCondition.h>
#include <Modloader/app/structs/SeinOutsideZoneCondition__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SeinOutsideZoneCondition {
        inline app::SeinOutsideZoneCondition__Class** type_info() {
            static app::SeinOutsideZoneCondition__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::SeinOutsideZoneCondition__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::SeinOutsideZoneCondition__Class* get_class() {
            return il2cpp::get_class<app::SeinOutsideZoneCondition__Class>(type_info(), "", "SeinOutsideZoneCondition");
        }
        inline app::SeinOutsideZoneCondition* create() {
            return il2cpp::create_object<app::SeinOutsideZoneCondition>(get_class());
        }
    } // namespace SeinOutsideZoneCondition
} // namespace app::classes::types
