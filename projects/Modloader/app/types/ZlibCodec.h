#pragma once
#include <Modloader/app/structs/ZlibCodec.h>
#include <Modloader/app/structs/ZlibCodec__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ZlibCodec {
        inline app::ZlibCodec__Class** type_info() {
            static app::ZlibCodec__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::ZlibCodec__Class**)(modloader::win::memory::resolve_rva(0x0474B430));
            }
            return cache;
        }
        inline app::ZlibCodec__Class* get_class() {
            return il2cpp::get_class<app::ZlibCodec__Class>(type_info(), "Ionic.Zlib", "ZlibCodec");
        }
        inline app::ZlibCodec* create() {
            return il2cpp::create_object<app::ZlibCodec>(get_class());
        }
    } // namespace ZlibCodec
} // namespace app::classes::types
