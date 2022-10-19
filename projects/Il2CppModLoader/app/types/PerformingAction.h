#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace PerformingAction {
        inline app::PerformingAction__Class** type_info = (app::PerformingAction__Class**)(modloader::win::memory::resolve_rva(0x04740B68));
        inline app::PerformingAction__Class* get_class() {
            return il2cpp::get_class<app::PerformingAction__Class>(type_info, "", "PerformingAction");
        }
        inline app::PerformingAction* create() {
            return il2cpp::create_object<app::PerformingAction>(get_class());
        }
    } // namespace PerformingAction
} // namespace app::classes::types
