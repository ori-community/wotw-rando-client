#pragma once
#include <Modloader/app/structs/ICollection.h>
#include <Modloader/app/structs/ICollection__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ICollection {
        inline app::ICollection__Class** type_info() {
            static app::ICollection__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::ICollection__Class**)(modloader::win::memory::resolve_rva(0x0473B3F0));
            }
            return cache;
        }
        inline app::ICollection__Class* get_class() {
            return il2cpp::get_class<app::ICollection__Class>(type_info(), "System.Collections", "ICollection");
        }
    } // namespace ICollection
} // namespace app::classes::types
