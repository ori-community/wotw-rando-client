#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace AuthenticatedStream {
        namespace {
            app::AuthenticatedStream__Class* type_info_ref = nullptr;
        }
        app::AuthenticatedStream__Class** type_info = &type_info_ref;
        inline app::AuthenticatedStream__Class* get_class() {
            return il2cpp::get_class<app::AuthenticatedStream__Class>(type_info, "System.Net.Security", "AuthenticatedStream");
        }
        inline app::AuthenticatedStream* create() {
            return il2cpp::create_object<app::AuthenticatedStream>(get_class());
        }
    } // namespace AuthenticatedStream
} // namespace app::classes::types
