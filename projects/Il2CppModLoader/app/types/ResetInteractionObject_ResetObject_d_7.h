#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace ResetInteractionObject_ResetObject_d_7 {
        inline app::ResetInteractionObject_ResetObject_d_7__Class** type_info = (app::ResetInteractionObject_ResetObject_d_7__Class**)(modloader::win::memory::resolve_rva(0x0476B830));
        inline app::ResetInteractionObject_ResetObject_d_7__Class* get_class() {
            return il2cpp::get_nested_class<app::ResetInteractionObject_ResetObject_d_7__Class>(type_info, "RootMotion.Demos", "ResetInteractionObject", "<ResetObject>d__7");
        }
        inline app::ResetInteractionObject_ResetObject_d_7* create() {
            return il2cpp::create_object<app::ResetInteractionObject_ResetObject_d_7>(get_class());
        }
    } // namespace ResetInteractionObject_ResetObject_d_7
} // namespace app::classes::types
