#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/TurtleDamageCondition__Class.h>
#include <Modloader/app/structs/TurtleDamageCondition.h>

namespace app::classes::types {
    namespace TurtleDamageCondition {
        namespace {
            inline app::TurtleDamageCondition__Class* type_info_ref = nullptr;
        }
        inline app::TurtleDamageCondition__Class** type_info = &type_info_ref;
        inline app::TurtleDamageCondition__Class* get_class() {
            return il2cpp::get_class<app::TurtleDamageCondition__Class>(type_info, "", "TurtleDamageCondition");
        }
        inline app::TurtleDamageCondition* create() {
            return il2cpp::create_object<app::TurtleDamageCondition>(get_class());
        }
    } // namespace TurtleDamageCondition
} // namespace app::classes::types
