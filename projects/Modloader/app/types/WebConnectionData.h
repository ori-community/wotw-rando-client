#pragma once
#include <Modloader/app/structs/WebConnectionData.h>
#include <Modloader/app/structs/WebConnectionData__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace WebConnectionData {
        inline app::WebConnectionData__Class** type_info() {
            static app::WebConnectionData__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::WebConnectionData__Class**)(modloader::win::memory::resolve_rva(0x0477E9D8));
            }
            return cache;
        }
        inline app::WebConnectionData__Class* get_class() {
            return il2cpp::get_class<app::WebConnectionData__Class>(type_info(), "System.Net", "WebConnectionData");
        }
        inline app::WebConnectionData* create() {
            return il2cpp::create_object<app::WebConnectionData>(get_class());
        }
    } // namespace WebConnectionData
} // namespace app::classes::types
