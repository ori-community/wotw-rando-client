#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace Action_1__Array {
        inline app::Action_1__Array__Class** type_info = (app::Action_1__Array__Class**)(modloader::win::memory::resolve_rva(0x04726DE0));
        inline app::Action_1__Array__Class* get_class() {
            return il2cpp::get_class<app::Action_1__Array__Class>(type_info, "Moon.BehaviourSystem", "Action[]");
        }
        inline app::Action_1__Array* create() {
            return il2cpp::create_object<app::Action_1__Array>(get_class());
        }
    } // namespace Action_1__Array
} // namespace app::classes::types
