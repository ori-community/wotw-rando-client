#pragma once
#include <Modloader/app/structs/fsVersionManager.h>
#include <Modloader/app/structs/fsVersionManager__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace fsVersionManager {
        inline app::fsVersionManager__Class** type_info() {
            static app::fsVersionManager__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::fsVersionManager__Class**)(modloader::win::memory::resolve_rva(0x0473A250));
            }
            return cache;
        }
        inline app::fsVersionManager__Class* get_class() {
            return il2cpp::get_class<app::fsVersionManager__Class>(type_info(), "FullSerializer.Internal", "fsVersionManager");
        }
        inline app::fsVersionManager* create() {
            return il2cpp::create_object<app::fsVersionManager>(get_class());
        }
    } // namespace fsVersionManager
} // namespace app::classes::types
