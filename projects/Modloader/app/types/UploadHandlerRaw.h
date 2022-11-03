#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace UploadHandlerRaw {
        inline app::UploadHandlerRaw__Class** type_info = (app::UploadHandlerRaw__Class**)(modloader::win::memory::resolve_rva(0x0472BFA8));
        inline app::UploadHandlerRaw__Class* get_class() {
            return il2cpp::get_class<app::UploadHandlerRaw__Class>(type_info, "UnityEngine.Networking", "UploadHandlerRaw");
        }
        inline app::UploadHandlerRaw* create() {
            return il2cpp::create_object<app::UploadHandlerRaw>(get_class());
        }
    } // namespace UploadHandlerRaw
} // namespace app::classes::types
