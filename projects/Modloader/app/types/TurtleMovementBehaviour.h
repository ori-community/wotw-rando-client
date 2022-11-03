#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace TurtleMovementBehaviour {
        namespace {
            inline app::TurtleMovementBehaviour__Class* type_info_ref = nullptr;
        }
        inline app::TurtleMovementBehaviour__Class** type_info = &type_info_ref;
        inline app::TurtleMovementBehaviour__Class* get_class() {
            return il2cpp::get_class<app::TurtleMovementBehaviour__Class>(type_info, "", "TurtleMovementBehaviour");
        }
        inline app::TurtleMovementBehaviour* create() {
            return il2cpp::create_object<app::TurtleMovementBehaviour>(get_class());
        }
    } // namespace TurtleMovementBehaviour
} // namespace app::classes::types
