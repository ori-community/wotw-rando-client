#pragma once
#include <Modloader/app/structs/WebException.h>
#include <Modloader/app/structs/WebException__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace WebException {
        inline app::WebException__Class** type_info() {
            static app::WebException__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::WebException__Class**)(modloader::win::memory::resolve_rva(0x0475D9F8));
            }
            return cache;
        }
        inline app::WebException__Class* get_class() {
            return il2cpp::get_class<app::WebException__Class>(type_info(), "System.Net", "WebException");
        }
        inline app::WebException* create() {
            return il2cpp::create_object<app::WebException>(get_class());
        }
    } // namespace WebException
} // namespace app::classes::types
