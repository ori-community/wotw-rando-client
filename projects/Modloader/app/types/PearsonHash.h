#pragma once
#include <Modloader/app/structs/PearsonHash.h>
#include <Modloader/app/structs/PearsonHash__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace PearsonHash {
        inline app::PearsonHash__Class** type_info() {
            static app::PearsonHash__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::PearsonHash__Class**)(modloader::win::memory::resolve_rva(0x04787260));
            }
            return cache;
        }
        inline app::PearsonHash__Class* get_class() {
            return il2cpp::get_class<app::PearsonHash__Class>(type_info(), "Moon", "PearsonHash");
        }
        inline app::PearsonHash* create() {
            return il2cpp::create_object<app::PearsonHash>(get_class());
        }
    } // namespace PearsonHash
} // namespace app::classes::types
