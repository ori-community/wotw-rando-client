#pragma once
#include <Modloader/app/structs/Context_1.h>
#include <Modloader/app/structs/Context_1__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace Context_1 {
        inline app::Context_1__Class** type_info() {
            static app::Context_1__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::Context_1__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::Context_1__Class* get_class() {
            return il2cpp::get_class<app::Context_1__Class>(type_info(), "Mono.Security.Protocol.Tls", "Context");
        }
        inline app::Context_1* create() {
            return il2cpp::create_object<app::Context_1>(get_class());
        }
    } // namespace Context_1
} // namespace app::classes::types
