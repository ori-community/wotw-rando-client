#pragma once
#include <Modloader/app/structs/ResponseStream.h>
#include <Modloader/app/structs/ResponseStream__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ResponseStream {
        inline app::ResponseStream__Class** type_info() {
            static app::ResponseStream__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::ResponseStream__Class**)(modloader::win::memory::resolve_rva(0x0478E1D0));
            }
            return cache;
        }
        inline app::ResponseStream__Class* get_class() {
            return il2cpp::get_class<app::ResponseStream__Class>(type_info(), "System.Net", "ResponseStream");
        }
        inline app::ResponseStream* create() {
            return il2cpp::create_object<app::ResponseStream>(get_class());
        }
    } // namespace ResponseStream
} // namespace app::classes::types
