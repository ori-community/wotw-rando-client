#pragma once
#include <Modloader/app/structs/Stream.h>
#include <Modloader/app/structs/Stream__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace Stream {
        inline app::Stream__Class** type_info() {
            static app::Stream__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::Stream__Class**)(modloader::win::memory::resolve_rva(0x04766410));
            }
            return cache;
        }
        inline app::Stream__Class* get_class() {
            return il2cpp::get_class<app::Stream__Class>(type_info(), "System.IO", "Stream");
        }
        inline app::Stream* create() {
            return il2cpp::create_object<app::Stream>(get_class());
        }
    } // namespace Stream
} // namespace app::classes::types
