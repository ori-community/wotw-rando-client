#pragma once
#include <Modloader/app/structs/InputTracking.h>
#include <Modloader/app/structs/InputTracking__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace InputTracking {
        inline app::InputTracking__Class** type_info() {
            static app::InputTracking__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::InputTracking__Class**)(modloader::win::memory::resolve_rva(0x047088D0));
            }
            return cache;
        }
        inline app::InputTracking__Class* get_class() {
            return il2cpp::get_class<app::InputTracking__Class>(type_info(), "UnityEngine.XR", "InputTracking");
        }
        inline app::InputTracking* create() {
            return il2cpp::create_object<app::InputTracking>(get_class());
        }
    } // namespace InputTracking
} // namespace app::classes::types
