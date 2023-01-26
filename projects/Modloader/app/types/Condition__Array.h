#pragma once
#include <Modloader/app/structs/Condition__Array.h>
#include <Modloader/app/structs/Condition__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace Condition__Array {
        inline app::Condition__Array__Class** type_info() {
            static app::Condition__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::Condition__Array__Class**)(modloader::win::memory::resolve_rva(0x0475AAF8));
            }
            return cache;
        }
        inline app::Condition__Array__Class* get_class() {
            return il2cpp::get_class<app::Condition__Array__Class>(type_info(), "Moon.BehaviourSystem", "Condition[]");
        }
        inline app::Condition__Array* create() {
            return il2cpp::create_object<app::Condition__Array>(get_class());
        }
    } // namespace Condition__Array
} // namespace app::classes::types
