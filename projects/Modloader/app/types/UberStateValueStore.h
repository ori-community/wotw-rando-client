#pragma once
#include <Modloader/app/structs/UberStateValueStore.h>
#include <Modloader/app/structs/UberStateValueStore__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace UberStateValueStore {
        inline app::UberStateValueStore__Class** type_info() {
            static app::UberStateValueStore__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::UberStateValueStore__Class**)(modloader::win::memory::resolve_rva(0x0475DF90));
            }
            return cache;
        }
        inline app::UberStateValueStore__Class* get_class() {
            return il2cpp::get_class<app::UberStateValueStore__Class>(type_info(), "Moon", "UberStateValueStore");
        }
        inline app::UberStateValueStore* create() {
            return il2cpp::create_object<app::UberStateValueStore>(get_class());
        }
    } // namespace UberStateValueStore
} // namespace app::classes::types
