#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace SeinInsideZoneCondition {
        namespace {
            inline app::SeinInsideZoneCondition__Class* type_info_ref = nullptr;
        }
        inline app::SeinInsideZoneCondition__Class** type_info = &type_info_ref;
        inline app::SeinInsideZoneCondition__Class* get_class() {
            return il2cpp::get_class<app::SeinInsideZoneCondition__Class>(type_info, "", "SeinInsideZoneCondition");
        }
        inline app::SeinInsideZoneCondition* create() {
            return il2cpp::create_object<app::SeinInsideZoneCondition>(get_class());
        }
    } // namespace SeinInsideZoneCondition
} // namespace app::classes::types
