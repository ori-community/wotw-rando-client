#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/TurtleAttackSelector__Class.h>
#include <Modloader/app/structs/TurtleAttackSelector.h>

namespace app::classes::types {
    namespace TurtleAttackSelector {
        namespace {
            inline app::TurtleAttackSelector__Class* type_info_ref = nullptr;
        }
        inline app::TurtleAttackSelector__Class** type_info = &type_info_ref;
        inline app::TurtleAttackSelector__Class* get_class() {
            return il2cpp::get_class<app::TurtleAttackSelector__Class>(type_info, "", "TurtleAttackSelector");
        }
        inline app::TurtleAttackSelector* create() {
            return il2cpp::create_object<app::TurtleAttackSelector>(get_class());
        }
    } // namespace TurtleAttackSelector
} // namespace app::classes::types
