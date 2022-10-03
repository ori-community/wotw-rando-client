#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace MobileAuthenticatedStream_ProcessAuthentication_d_47 {
        namespace {
            app::MobileAuthenticatedStream_ProcessAuthentication_d_47__Class* type_info_ref = nullptr;
        }
        app::MobileAuthenticatedStream_ProcessAuthentication_d_47__Class** type_info = &type_info_ref;
        inline app::MobileAuthenticatedStream_ProcessAuthentication_d_47__Class* get_class() {
            return il2cpp::get_nested_class<app::MobileAuthenticatedStream_ProcessAuthentication_d_47__Class>(type_info, "Mono.Net.Security", "MobileAuthenticatedStream", "<ProcessAuthentication>d__47");
        }
        inline app::MobileAuthenticatedStream_ProcessAuthentication_d_47* create() {
            return il2cpp::create_object<app::MobileAuthenticatedStream_ProcessAuthentication_d_47>(get_class());
        }
        inline app::MobileAuthenticatedStream_ProcessAuthentication_d_47__Boxed* box(app::MobileAuthenticatedStream_ProcessAuthentication_d_47 value) {
            return il2cpp::box_value<app::MobileAuthenticatedStream_ProcessAuthentication_d_47__Boxed>(get_class(), value);
        }
    } // namespace MobileAuthenticatedStream_ProcessAuthentication_d_47
} // namespace app::classes::types
