#pragma once
#include <Modloader/app/structs/HttpListenerRequestUriBuilder.h>
#include <Modloader/app/structs/HttpListenerRequestUriBuilder__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace HttpListenerRequestUriBuilder {
        inline app::HttpListenerRequestUriBuilder__Class** type_info() {
            static app::HttpListenerRequestUriBuilder__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::HttpListenerRequestUriBuilder__Class**)(modloader::win::memory::resolve_rva(0x04723E98));
            }
            return cache;
        }
        inline app::HttpListenerRequestUriBuilder__Class* get_class() {
            return il2cpp::get_class<app::HttpListenerRequestUriBuilder__Class>(type_info(), "System.Net", "HttpListenerRequestUriBuilder");
        }
        inline app::HttpListenerRequestUriBuilder* create() {
            return il2cpp::create_object<app::HttpListenerRequestUriBuilder>(get_class());
        }
    } // namespace HttpListenerRequestUriBuilder
} // namespace app::classes::types
