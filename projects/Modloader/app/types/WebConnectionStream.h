#pragma once
#include <Modloader/app/structs/WebConnectionStream.h>
#include <Modloader/app/structs/WebConnectionStream__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace WebConnectionStream {
        inline app::WebConnectionStream__Class** type_info() {
            static app::WebConnectionStream__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::WebConnectionStream__Class**)(modloader::win::memory::resolve_rva(0x0471B1C8));
            }
            return cache;
        }
        inline app::WebConnectionStream__Class* get_class() {
            return il2cpp::get_class<app::WebConnectionStream__Class>(type_info(), "System.Net", "WebConnectionStream");
        }
        inline app::WebConnectionStream* create() {
            return il2cpp::create_object<app::WebConnectionStream>(get_class());
        }
    } // namespace WebConnectionStream
} // namespace app::classes::types
