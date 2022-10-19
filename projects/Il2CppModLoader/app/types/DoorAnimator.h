#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace DoorAnimator {
        inline app::DoorAnimator__Class** type_info = (app::DoorAnimator__Class**)(modloader::win::memory::resolve_rva(0x04748430));
        inline app::DoorAnimator__Class* get_class() {
            return il2cpp::get_class<app::DoorAnimator__Class>(type_info, "", "DoorAnimator");
        }
        inline app::DoorAnimator* create() {
            return il2cpp::create_object<app::DoorAnimator>(get_class());
        }
    } // namespace DoorAnimator
} // namespace app::classes::types
