#pragma once
#include <Modloader/app/structs/WebResponse.h>
#include <Modloader/app/structs/WebResponse__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace WebResponse {
        inline app::WebResponse__Class** type_info() {
            static app::WebResponse__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::WebResponse__Class**)(modloader::win::memory::resolve_rva(0x047516B0));
            }
            return cache;
        }
        inline app::WebResponse__Class* get_class() {
            return il2cpp::get_class<app::WebResponse__Class>(type_info(), "System.Net", "WebResponse");
        }
        inline app::WebResponse* create() {
            return il2cpp::create_object<app::WebResponse>(get_class());
        }
    } // namespace WebResponse
} // namespace app::classes::types
