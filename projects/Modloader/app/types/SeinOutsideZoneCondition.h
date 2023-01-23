#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/SeinOutsideZoneCondition__Class.h>
#include <Modloader/app/structs/SeinOutsideZoneCondition.h>

namespace app::classes::types {
    namespace SeinOutsideZoneCondition {
        namespace {
            inline app::SeinOutsideZoneCondition__Class* type_info_ref = nullptr;
        }
        inline app::SeinOutsideZoneCondition__Class** type_info = &type_info_ref;
        inline app::SeinOutsideZoneCondition__Class* get_class() {
            return il2cpp::get_class<app::SeinOutsideZoneCondition__Class>(type_info, "", "SeinOutsideZoneCondition");
        }
        inline app::SeinOutsideZoneCondition* create() {
            return il2cpp::create_object<app::SeinOutsideZoneCondition>(get_class());
        }
    } // namespace SeinOutsideZoneCondition
} // namespace app::classes::types
