#pragma once
#include <Modloader/app/structs/DownloadHandlerBuffer.h>
#include <Modloader/app/structs/DownloadHandlerBuffer__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace DownloadHandlerBuffer {
        inline app::DownloadHandlerBuffer__Class** type_info() {
            static app::DownloadHandlerBuffer__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::DownloadHandlerBuffer__Class**)(modloader::win::memory::resolve_rva(0x0472C198));
            }
            return cache;
        }
        inline app::DownloadHandlerBuffer__Class* get_class() {
            return il2cpp::get_class<app::DownloadHandlerBuffer__Class>(type_info(), "UnityEngine.Networking", "DownloadHandlerBuffer");
        }
        inline app::DownloadHandlerBuffer* create() {
            return il2cpp::create_object<app::DownloadHandlerBuffer>(get_class());
        }
    } // namespace DownloadHandlerBuffer
} // namespace app::classes::types
