#pragma once
#include <Modloader/app/structs/UberSpawnManager.h>
#include <Modloader/app/structs/UberSpawnManager__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace UberSpawnManager {
        inline app::UberSpawnManager__Class** type_info() {
            static app::UberSpawnManager__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::UberSpawnManager__Class**)(modloader::win::memory::resolve_rva(0x0476C600));
            }
            return cache;
        }
        inline app::UberSpawnManager__Class* get_class() {
            return il2cpp::get_class<app::UberSpawnManager__Class>(type_info(), "", "UberSpawnManager");
        }
        inline app::UberSpawnManager* create() {
            return il2cpp::create_object<app::UberSpawnManager>(get_class());
        }
    } // namespace UberSpawnManager
} // namespace app::classes::types
