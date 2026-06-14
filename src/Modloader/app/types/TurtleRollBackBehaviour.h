#pragma once
#include <Modloader/app/structs/TurtleRollBackBehaviour.h>
#include <Modloader/app/structs/TurtleRollBackBehaviour__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace TurtleRollBackBehaviour {
        inline app::TurtleRollBackBehaviour__Class** type_info() {
            static app::TurtleRollBackBehaviour__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::TurtleRollBackBehaviour__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::TurtleRollBackBehaviour__Class* get_class() {
            return il2cpp::get_class<app::TurtleRollBackBehaviour__Class>(type_info(), "", "TurtleRollBackBehaviour");
        }
        inline app::TurtleRollBackBehaviour* create() {
            return il2cpp::create_object<app::TurtleRollBackBehaviour>(get_class());
        }
    } // namespace TurtleRollBackBehaviour
} // namespace app::classes::types
