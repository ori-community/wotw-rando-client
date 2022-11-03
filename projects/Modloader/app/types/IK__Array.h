#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace IK__Array {
        inline app::IK__Array__Class** type_info = (app::IK__Array__Class**)(modloader::win::memory::resolve_rva(0x0470BF20));
        inline app::IK__Array__Class* get_class() {
            return il2cpp::get_class<app::IK__Array__Class>(type_info, "RootMotion.FinalIK", "IK[]");
        }
        inline app::IK__Array* create() {
            return il2cpp::create_object<app::IK__Array>(get_class());
        }
    } // namespace IK__Array
} // namespace app::classes::types
