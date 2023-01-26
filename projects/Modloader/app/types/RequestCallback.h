#pragma once
#include <Modloader/app/structs/RequestCallback.h>
#include <Modloader/app/structs/RequestCallback__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace RequestCallback {
        inline app::RequestCallback__Class** type_info() {
            static app::RequestCallback__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::RequestCallback__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::RequestCallback__Class* get_class() {
            return il2cpp::get_class<app::RequestCallback__Class>(type_info(), "Moon.Network.Web", "RequestCallback");
        }
        inline app::RequestCallback* create() {
            return il2cpp::create_object<app::RequestCallback>(get_class());
        }
    } // namespace RequestCallback
} // namespace app::classes::types
