#pragma once
#include <Modloader/app/structs/InflateManager.h>
#include <Modloader/app/structs/InflateManager__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace InflateManager {
        inline app::InflateManager__Class** type_info() {
            static app::InflateManager__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::InflateManager__Class**)(modloader::win::memory::resolve_rva(0x0472E0B0));
            }
            return cache;
        }
        inline app::InflateManager__Class* get_class() {
            return il2cpp::get_class<app::InflateManager__Class>(type_info(), "Ionic.Zlib", "InflateManager");
        }
        inline app::InflateManager* create() {
            return il2cpp::create_object<app::InflateManager>(get_class());
        }
    } // namespace InflateManager
} // namespace app::classes::types
