#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/HttpListenerRequestUriBuilder__Class.h>
#include <Modloader/app/structs/HttpListenerRequestUriBuilder.h>

namespace app::classes::types {
    namespace HttpListenerRequestUriBuilder {
        inline app::HttpListenerRequestUriBuilder__Class** type_info = (app::HttpListenerRequestUriBuilder__Class**)(modloader::win::memory::resolve_rva(0x04723E98));
        inline app::HttpListenerRequestUriBuilder__Class* get_class() {
            return il2cpp::get_class<app::HttpListenerRequestUriBuilder__Class>(type_info, "System.Net", "HttpListenerRequestUriBuilder");
        }
        inline app::HttpListenerRequestUriBuilder* create() {
            return il2cpp::create_object<app::HttpListenerRequestUriBuilder>(get_class());
        }
    } // namespace HttpListenerRequestUriBuilder
} // namespace app::classes::types
