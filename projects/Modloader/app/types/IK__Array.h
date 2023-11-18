#pragma once
#include <Modloader/app/structs/IK__Array.h>
#include <Modloader/app/structs/IK__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace IK__Array {
        inline app::IK__Array__Class** type_info() {
            static app::IK__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::IK__Array__Class**)(modloader::win::memory::resolve_rva(0x0470BF20));
            }
            return cache;
        }
        inline app::IK__Array__Class* get_class() {
            return il2cpp::get_class<app::IK__Array__Class>(type_info(), "RootMotion.FinalIK", "IK[]");
        }
        inline app::IK__Array* create() {
            return il2cpp::create_object<app::IK__Array>(get_class());
        }
    } // namespace IK__Array
} // namespace app::classes::types
