#pragma once
#include <Modloader/app/structs/fsISerializationCallbacks.h>
#include <Modloader/app/structs/fsISerializationCallbacks__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace fsISerializationCallbacks {
        inline app::fsISerializationCallbacks__Class** type_info() {
            static app::fsISerializationCallbacks__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::fsISerializationCallbacks__Class**)(modloader::win::memory::resolve_rva(0x047555D0));
            }
            return cache;
        }
        inline app::fsISerializationCallbacks__Class* get_class() {
            return il2cpp::get_class<app::fsISerializationCallbacks__Class>(type_info(), "FullSerializer", "fsISerializationCallbacks");
        }
    } // namespace fsISerializationCallbacks
} // namespace app::classes::types
