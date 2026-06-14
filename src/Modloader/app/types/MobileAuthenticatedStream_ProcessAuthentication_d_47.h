#pragma once
#include <Modloader/app/structs/MobileAuthenticatedStream_ProcessAuthentication_d_47.h>
#include <Modloader/app/structs/MobileAuthenticatedStream_ProcessAuthentication_d_47__Boxed.h>
#include <Modloader/app/structs/MobileAuthenticatedStream_ProcessAuthentication_d_47__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace MobileAuthenticatedStream_ProcessAuthentication_d_47 {
        inline app::MobileAuthenticatedStream_ProcessAuthentication_d_47__Class** type_info() {
            static app::MobileAuthenticatedStream_ProcessAuthentication_d_47__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::MobileAuthenticatedStream_ProcessAuthentication_d_47__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::MobileAuthenticatedStream_ProcessAuthentication_d_47__Class* get_class() {
            return il2cpp::get_nested_class<app::MobileAuthenticatedStream_ProcessAuthentication_d_47__Class>(type_info(), "Mono.Net.Security", "MobileAuthenticatedStream", "<ProcessAuthentication>d__47");
        }
        inline app::MobileAuthenticatedStream_ProcessAuthentication_d_47* create() {
            return il2cpp::create_object<app::MobileAuthenticatedStream_ProcessAuthentication_d_47>(get_class());
        }
        inline app::MobileAuthenticatedStream_ProcessAuthentication_d_47__Boxed* box(app::MobileAuthenticatedStream_ProcessAuthentication_d_47 value) {
            return il2cpp::box_value<app::MobileAuthenticatedStream_ProcessAuthentication_d_47__Boxed>(get_class(), value);
        }
    } // namespace MobileAuthenticatedStream_ProcessAuthentication_d_47
} // namespace app::classes::types
