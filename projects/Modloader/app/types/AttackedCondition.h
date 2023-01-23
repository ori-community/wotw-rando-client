#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/AttackedCondition__Class.h>
#include <Modloader/app/structs/AttackedCondition.h>

namespace app::classes::types {
    namespace AttackedCondition {
        namespace {
            inline app::AttackedCondition__Class* type_info_ref = nullptr;
        }
        inline app::AttackedCondition__Class** type_info = &type_info_ref;
        inline app::AttackedCondition__Class* get_class() {
            return il2cpp::get_class<app::AttackedCondition__Class>(type_info, "", "AttackedCondition");
        }
        inline app::AttackedCondition* create() {
            return il2cpp::create_object<app::AttackedCondition>(get_class());
        }
    } // namespace AttackedCondition
} // namespace app::classes::types
