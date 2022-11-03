#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace TurtleRollBackBehaviour {
        namespace {
            inline app::TurtleRollBackBehaviour__Class* type_info_ref = nullptr;
        }
        inline app::TurtleRollBackBehaviour__Class** type_info = &type_info_ref;
        inline app::TurtleRollBackBehaviour__Class* get_class() {
            return il2cpp::get_class<app::TurtleRollBackBehaviour__Class>(type_info, "", "TurtleRollBackBehaviour");
        }
        inline app::TurtleRollBackBehaviour* create() {
            return il2cpp::create_object<app::TurtleRollBackBehaviour>(get_class());
        }
    } // namespace TurtleRollBackBehaviour
} // namespace app::classes::types
