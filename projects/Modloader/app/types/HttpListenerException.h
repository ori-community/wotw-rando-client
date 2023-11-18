#pragma once
#include <Modloader/app/structs/HttpListenerException.h>
#include <Modloader/app/structs/HttpListenerException__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace HttpListenerException {
        inline app::HttpListenerException__Class** type_info() {
            static app::HttpListenerException__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::HttpListenerException__Class**)(modloader::win::memory::resolve_rva(0x0470EEB0));
            }
            return cache;
        }
        inline app::HttpListenerException__Class* get_class() {
            return il2cpp::get_class<app::HttpListenerException__Class>(type_info(), "System.Net", "HttpListenerException");
        }
        inline app::HttpListenerException* create() {
            return il2cpp::create_object<app::HttpListenerException>(get_class());
        }
    } // namespace HttpListenerException
} // namespace app::classes::types
