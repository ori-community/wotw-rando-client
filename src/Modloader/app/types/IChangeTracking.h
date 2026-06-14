#pragma once
#include <Modloader/app/structs/IChangeTracking.h>
#include <Modloader/app/structs/IChangeTracking__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace IChangeTracking {
        inline app::IChangeTracking__Class** type_info() {
            static app::IChangeTracking__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::IChangeTracking__Class**)(modloader::win::memory::resolve_rva(0x047168F0));
            }
            return cache;
        }
        inline app::IChangeTracking__Class* get_class() {
            return il2cpp::get_class<app::IChangeTracking__Class>(type_info(), "System.ComponentModel", "IChangeTracking");
        }
    } // namespace IChangeTracking
} // namespace app::classes::types
