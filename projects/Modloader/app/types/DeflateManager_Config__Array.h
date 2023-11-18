#pragma once
#include <Modloader/app/structs/DeflateManager_Config__Array.h>
#include <Modloader/app/structs/DeflateManager_Config__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace DeflateManager_Config__Array {
        inline app::DeflateManager_Config__Array__Class** type_info() {
            static app::DeflateManager_Config__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::DeflateManager_Config__Array__Class**)(modloader::win::memory::resolve_rva(0x04724000));
            }
            return cache;
        }
        inline app::DeflateManager_Config__Array__Class* get_class() {
            return il2cpp::get_class<app::DeflateManager_Config__Array__Class>(type_info(), "Ionic.Zlib", "DeflateManager+Config[]");
        }
        inline app::DeflateManager_Config__Array* create() {
            return il2cpp::create_object<app::DeflateManager_Config__Array>(get_class());
        }
    } // namespace DeflateManager_Config__Array
} // namespace app::classes::types
