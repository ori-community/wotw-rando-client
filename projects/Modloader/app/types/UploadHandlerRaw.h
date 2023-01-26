#pragma once
#include <Modloader/app/structs/UploadHandlerRaw.h>
#include <Modloader/app/structs/UploadHandlerRaw__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace UploadHandlerRaw {
        inline app::UploadHandlerRaw__Class** type_info() {
            static app::UploadHandlerRaw__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::UploadHandlerRaw__Class**)(modloader::win::memory::resolve_rva(0x0472BFA8));
            }
            return cache;
        }
        inline app::UploadHandlerRaw__Class* get_class() {
            return il2cpp::get_class<app::UploadHandlerRaw__Class>(type_info(), "UnityEngine.Networking", "UploadHandlerRaw");
        }
        inline app::UploadHandlerRaw* create() {
            return il2cpp::create_object<app::UploadHandlerRaw>(get_class());
        }
    } // namespace UploadHandlerRaw
} // namespace app::classes::types
