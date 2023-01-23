#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/CanViewProfilesCondition__Class.h>
#include <Modloader/app/structs/CanViewProfilesCondition.h>

namespace app::classes::types {
    namespace CanViewProfilesCondition {
        namespace {
            inline app::CanViewProfilesCondition__Class* type_info_ref = nullptr;
        }
        inline app::CanViewProfilesCondition__Class** type_info = &type_info_ref;
        inline app::CanViewProfilesCondition__Class* get_class() {
            return il2cpp::get_class<app::CanViewProfilesCondition__Class>(type_info, "", "CanViewProfilesCondition");
        }
        inline app::CanViewProfilesCondition* create() {
            return il2cpp::create_object<app::CanViewProfilesCondition>(get_class());
        }
    } // namespace CanViewProfilesCondition
} // namespace app::classes::types
