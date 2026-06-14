#pragma once
#include <Modloader/app/structs/MemoryStream.h>
#include <Modloader/app/structs/MemoryStream__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace MemoryStream {
        inline app::MemoryStream__Class** type_info() {
            static app::MemoryStream__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::MemoryStream__Class**)(modloader::win::memory::resolve_rva(0x0474A648));
            }
            return cache;
        }
        inline app::MemoryStream__Class* get_class() {
            return il2cpp::get_class<app::MemoryStream__Class>(type_info(), "System.IO", "MemoryStream");
        }
        inline app::MemoryStream* create() {
            return il2cpp::create_object<app::MemoryStream>(get_class());
        }
    } // namespace MemoryStream
} // namespace app::classes::types
