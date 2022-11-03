#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace Condition__Array {
        inline app::Condition__Array__Class** type_info = (app::Condition__Array__Class**)(modloader::win::memory::resolve_rva(0x0475AAF8));
        inline app::Condition__Array__Class* get_class() {
            return il2cpp::get_class<app::Condition__Array__Class>(type_info, "Moon.BehaviourSystem", "Condition[]");
        }
        inline app::Condition__Array* create() {
            return il2cpp::create_object<app::Condition__Array>(get_class());
        }
    } // namespace Condition__Array
} // namespace app::classes::types
