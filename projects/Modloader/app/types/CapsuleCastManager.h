#pragma once
#include <Modloader/app/structs/CapsuleCastManager.h>
#include <Modloader/app/structs/CapsuleCastManager__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace CapsuleCastManager {
        inline app::CapsuleCastManager__Class** type_info() {
            static app::CapsuleCastManager__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::CapsuleCastManager__Class**)(modloader::win::memory::resolve_rva(0x04702D60));
            }
            return cache;
        }
        inline app::CapsuleCastManager__Class* get_class() {
            return il2cpp::get_class<app::CapsuleCastManager__Class>(type_info(), "", "CapsuleCastManager");
        }
        inline app::CapsuleCastManager* create() {
            return il2cpp::create_object<app::CapsuleCastManager>(get_class());
        }
    } // namespace CapsuleCastManager
} // namespace app::classes::types
