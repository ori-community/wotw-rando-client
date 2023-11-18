#pragma once
#include <Modloader/app/structs/FireStick_DeactivateWithDelay_d_81.h>
#include <Modloader/app/structs/FireStick_DeactivateWithDelay_d_81__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace FireStick_DeactivateWithDelay_d_81 {
        inline app::FireStick_DeactivateWithDelay_d_81__Class** type_info() {
            static app::FireStick_DeactivateWithDelay_d_81__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::FireStick_DeactivateWithDelay_d_81__Class**)(modloader::win::memory::resolve_rva(0x0473D990));
            }
            return cache;
        }
        inline app::FireStick_DeactivateWithDelay_d_81__Class* get_class() {
            return il2cpp::get_nested_class<app::FireStick_DeactivateWithDelay_d_81__Class>(type_info(), "", "FireStick", "<DeactivateWithDelay>d__81");
        }
        inline app::FireStick_DeactivateWithDelay_d_81* create() {
            return il2cpp::create_object<app::FireStick_DeactivateWithDelay_d_81>(get_class());
        }
    } // namespace FireStick_DeactivateWithDelay_d_81
} // namespace app::classes::types
