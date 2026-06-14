#pragma once
#include <Modloader/app/structs/UberStateCollection.h>
#include <Modloader/app/structs/UberStateCollection__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace UberStateCollection {
        inline app::UberStateCollection__Class** type_info() {
            static app::UberStateCollection__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::UberStateCollection__Class**)(modloader::win::memory::resolve_rva(0x04706B28));
            }
            return cache;
        }
        inline app::UberStateCollection__Class* get_class() {
            return il2cpp::get_class<app::UberStateCollection__Class>(type_info(), "Moon", "UberStateCollection");
        }
        inline app::UberStateCollection* create() {
            return il2cpp::create_object<app::UberStateCollection>(get_class());
        }
    } // namespace UberStateCollection
} // namespace app::classes::types
