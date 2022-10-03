#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace CachedTransportContext {
        namespace {
            app::CachedTransportContext__Class* type_info_ref = nullptr;
        }
        app::CachedTransportContext__Class** type_info = &type_info_ref;
        inline app::CachedTransportContext__Class* get_class() {
            return il2cpp::get_class<app::CachedTransportContext__Class>(type_info, "System.Net", "CachedTransportContext");
        }
        inline app::CachedTransportContext* create() {
            return il2cpp::create_object<app::CachedTransportContext>(get_class());
        }
    } // namespace CachedTransportContext
} // namespace app::classes::types
