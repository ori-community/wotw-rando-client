#pragma once
#include <Modloader/app/structs/TransportContext.h>
#include <Modloader/app/structs/TransportContext__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace TransportContext {
        inline app::TransportContext__Class** type_info() {
            static app::TransportContext__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::TransportContext__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::TransportContext__Class* get_class() {
            return il2cpp::get_class<app::TransportContext__Class>(type_info(), "System.Net", "TransportContext");
        }
        inline app::TransportContext* create() {
            return il2cpp::create_object<app::TransportContext>(get_class());
        }
    } // namespace TransportContext
} // namespace app::classes::types
