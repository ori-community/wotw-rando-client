#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/DownloadHandlerBuffer__Class.h>
#include <Modloader/app/structs/DownloadHandlerBuffer.h>

namespace app::classes::types {
    namespace DownloadHandlerBuffer {
        inline app::DownloadHandlerBuffer__Class** type_info = (app::DownloadHandlerBuffer__Class**)(modloader::win::memory::resolve_rva(0x0472C198));
        inline app::DownloadHandlerBuffer__Class* get_class() {
            return il2cpp::get_class<app::DownloadHandlerBuffer__Class>(type_info, "UnityEngine.Networking", "DownloadHandlerBuffer");
        }
        inline app::DownloadHandlerBuffer* create() {
            return il2cpp::create_object<app::DownloadHandlerBuffer>(get_class());
        }
    } // namespace DownloadHandlerBuffer
} // namespace app::classes::types
