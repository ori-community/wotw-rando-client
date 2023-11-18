#pragma once
#include <Modloader/app/structs/LeaseManager.h>
#include <Modloader/app/structs/LeaseManager__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace LeaseManager {
        inline app::LeaseManager__Class** type_info() {
            static app::LeaseManager__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::LeaseManager__Class**)(modloader::win::memory::resolve_rva(0x047463C0));
            }
            return cache;
        }
        inline app::LeaseManager__Class* get_class() {
            return il2cpp::get_class<app::LeaseManager__Class>(type_info(), "System.Runtime.Remoting.Lifetime", "LeaseManager");
        }
        inline app::LeaseManager* create() {
            return il2cpp::create_object<app::LeaseManager>(get_class());
        }
    } // namespace LeaseManager
} // namespace app::classes::types
