#pragma once
#include <Modloader/app/structs/RequestStream.h>
#include <Modloader/app/structs/RequestStream__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace RequestStream {
        inline app::RequestStream__Class** type_info() {
            static app::RequestStream__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::RequestStream__Class**)(modloader::win::memory::resolve_rva(0x0470BE60));
            }
            return cache;
        }
        inline app::RequestStream__Class* get_class() {
            return il2cpp::get_class<app::RequestStream__Class>(type_info(), "System.Net", "RequestStream");
        }
        inline app::RequestStream* create() {
            return il2cpp::create_object<app::RequestStream>(get_class());
        }
    } // namespace RequestStream
} // namespace app::classes::types
