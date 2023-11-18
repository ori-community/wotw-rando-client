#pragma once
#include <Modloader/app/structs/ZlibBaseStream.h>
#include <Modloader/app/structs/ZlibBaseStream__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ZlibBaseStream {
        inline app::ZlibBaseStream__Class** type_info() {
            static app::ZlibBaseStream__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::ZlibBaseStream__Class**)(modloader::win::memory::resolve_rva(0x0471ADC8));
            }
            return cache;
        }
        inline app::ZlibBaseStream__Class* get_class() {
            return il2cpp::get_class<app::ZlibBaseStream__Class>(type_info(), "Ionic.Zlib", "ZlibBaseStream");
        }
        inline app::ZlibBaseStream* create() {
            return il2cpp::create_object<app::ZlibBaseStream>(get_class());
        }
    } // namespace ZlibBaseStream
} // namespace app::classes::types
