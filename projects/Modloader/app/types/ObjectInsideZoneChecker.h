#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace ObjectInsideZoneChecker {
        namespace {
            inline app::ObjectInsideZoneChecker__Class* type_info_ref = nullptr;
        }
        inline app::ObjectInsideZoneChecker__Class** type_info = &type_info_ref;
        inline app::ObjectInsideZoneChecker__Class* get_class() {
            return il2cpp::get_class<app::ObjectInsideZoneChecker__Class>(type_info, "", "ObjectInsideZoneChecker");
        }
        inline app::ObjectInsideZoneChecker* create() {
            return il2cpp::create_object<app::ObjectInsideZoneChecker>(get_class());
        }
    } // namespace ObjectInsideZoneChecker
} // namespace app::classes::types
