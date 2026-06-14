#pragma once
#include <Modloader/app/structs/Stream_NullStream.h>
#include <Modloader/app/structs/Stream_NullStream__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace Stream_NullStream {
        inline app::Stream_NullStream__Class** type_info() {
            static app::Stream_NullStream__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::Stream_NullStream__Class**)(modloader::win::memory::resolve_rva(0x04705120));
            }
            return cache;
        }
        inline app::Stream_NullStream__Class* get_class() {
            return il2cpp::get_nested_class<app::Stream_NullStream__Class>(type_info(), "System.IO", "Stream", "NullStream");
        }
        inline app::Stream_NullStream* create() {
            return il2cpp::create_object<app::Stream_NullStream>(get_class());
        }
    } // namespace Stream_NullStream
} // namespace app::classes::types
