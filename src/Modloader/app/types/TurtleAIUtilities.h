#pragma once
#include <Modloader/app/structs/TurtleAIUtilities.h>
#include <Modloader/app/structs/TurtleAIUtilities__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace TurtleAIUtilities {
        inline app::TurtleAIUtilities__Class** type_info() {
            static app::TurtleAIUtilities__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::TurtleAIUtilities__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::TurtleAIUtilities__Class* get_class() {
            return il2cpp::get_class<app::TurtleAIUtilities__Class>(type_info(), "", "TurtleAIUtilities");
        }
        inline app::TurtleAIUtilities* create() {
            return il2cpp::create_object<app::TurtleAIUtilities>(get_class());
        }
    } // namespace TurtleAIUtilities
} // namespace app::classes::types
