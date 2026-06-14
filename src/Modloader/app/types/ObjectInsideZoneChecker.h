#pragma once
#include <Modloader/app/structs/ObjectInsideZoneChecker.h>
#include <Modloader/app/structs/ObjectInsideZoneChecker__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ObjectInsideZoneChecker {
        inline app::ObjectInsideZoneChecker__Class** type_info() {
            static app::ObjectInsideZoneChecker__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::ObjectInsideZoneChecker__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::ObjectInsideZoneChecker__Class* get_class() {
            return il2cpp::get_class<app::ObjectInsideZoneChecker__Class>(type_info(), "", "ObjectInsideZoneChecker");
        }
        inline app::ObjectInsideZoneChecker* create() {
            return il2cpp::create_object<app::ObjectInsideZoneChecker>(get_class());
        }
    } // namespace ObjectInsideZoneChecker
} // namespace app::classes::types
