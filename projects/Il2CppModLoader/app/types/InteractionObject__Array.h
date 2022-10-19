#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace InteractionObject__Array {
        inline app::InteractionObject__Array__Class** type_info = (app::InteractionObject__Array__Class**)(modloader::win::memory::resolve_rva(0x04733198));
        inline app::InteractionObject__Array__Class* get_class() {
            return il2cpp::get_class<app::InteractionObject__Array__Class>(type_info, "RootMotion.FinalIK", "InteractionObject[]");
        }
        inline app::InteractionObject__Array* create() {
            return il2cpp::create_object<app::InteractionObject__Array>(get_class());
        }
    } // namespace InteractionObject__Array
} // namespace app::classes::types
