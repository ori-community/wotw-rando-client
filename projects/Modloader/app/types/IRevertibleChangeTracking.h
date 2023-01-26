#pragma once
#include <Modloader/app/structs/IRevertibleChangeTracking.h>
#include <Modloader/app/structs/IRevertibleChangeTracking__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace IRevertibleChangeTracking {
        inline app::IRevertibleChangeTracking__Class** type_info() {
            static app::IRevertibleChangeTracking__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::IRevertibleChangeTracking__Class**)(modloader::win::memory::resolve_rva(0x0470E748));
            }
            return cache;
        }
        inline app::IRevertibleChangeTracking__Class* get_class() {
            return il2cpp::get_class<app::IRevertibleChangeTracking__Class>(type_info(), "System.ComponentModel", "IRevertibleChangeTracking");
        }
    } // namespace IRevertibleChangeTracking
} // namespace app::classes::types
