#pragma once
#include <Modloader/app/structs/RestoreHealthPickup.h>
#include <Modloader/app/structs/RestoreHealthPickup__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace RestoreHealthPickup {
        inline app::RestoreHealthPickup__Class** type_info() {
            static app::RestoreHealthPickup__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::RestoreHealthPickup__Class**)(modloader::win::memory::resolve_rva(0x04751170));
            }
            return cache;
        }
        inline app::RestoreHealthPickup__Class* get_class() {
            return il2cpp::get_class<app::RestoreHealthPickup__Class>(type_info(), "", "RestoreHealthPickup");
        }
        inline app::RestoreHealthPickup* create() {
            return il2cpp::create_object<app::RestoreHealthPickup>(get_class());
        }
    } // namespace RestoreHealthPickup
} // namespace app::classes::types
