#pragma once
#include <Modloader/app/structs/CachedTransportContext.h>
#include <Modloader/app/structs/CachedTransportContext__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace CachedTransportContext {
        inline app::CachedTransportContext__Class** type_info() {
            static app::CachedTransportContext__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::CachedTransportContext__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::CachedTransportContext__Class* get_class() {
            return il2cpp::get_class<app::CachedTransportContext__Class>(type_info(), "System.Net", "CachedTransportContext");
        }
        inline app::CachedTransportContext* create() {
            return il2cpp::create_object<app::CachedTransportContext>(get_class());
        }
    } // namespace CachedTransportContext
} // namespace app::classes::types
