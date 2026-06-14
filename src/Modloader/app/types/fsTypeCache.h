#pragma once
#include <Modloader/app/structs/fsTypeCache.h>
#include <Modloader/app/structs/fsTypeCache__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace fsTypeCache {
        inline app::fsTypeCache__Class** type_info() {
            static app::fsTypeCache__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::fsTypeCache__Class**)(modloader::win::memory::resolve_rva(0x047543B0));
            }
            return cache;
        }
        inline app::fsTypeCache__Class* get_class() {
            return il2cpp::get_class<app::fsTypeCache__Class>(type_info(), "FullSerializer.Internal", "fsTypeCache");
        }
        inline app::fsTypeCache* create() {
            return il2cpp::create_object<app::fsTypeCache>(get_class());
        }
    } // namespace fsTypeCache
} // namespace app::classes::types
