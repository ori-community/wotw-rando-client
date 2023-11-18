#pragma once
#include <Modloader/app/structs/MobileAuthenticatedStream_InnerRead_d_66.h>
#include <Modloader/app/structs/MobileAuthenticatedStream_InnerRead_d_66__Boxed.h>
#include <Modloader/app/structs/MobileAuthenticatedStream_InnerRead_d_66__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace MobileAuthenticatedStream_InnerRead_d_66 {
        inline app::MobileAuthenticatedStream_InnerRead_d_66__Class** type_info() {
            static app::MobileAuthenticatedStream_InnerRead_d_66__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::MobileAuthenticatedStream_InnerRead_d_66__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::MobileAuthenticatedStream_InnerRead_d_66__Class* get_class() {
            return il2cpp::get_nested_class<app::MobileAuthenticatedStream_InnerRead_d_66__Class>(type_info(), "Mono.Net.Security", "MobileAuthenticatedStream", "<InnerRead>d__66");
        }
        inline app::MobileAuthenticatedStream_InnerRead_d_66* create() {
            return il2cpp::create_object<app::MobileAuthenticatedStream_InnerRead_d_66>(get_class());
        }
        inline app::MobileAuthenticatedStream_InnerRead_d_66__Boxed* box(app::MobileAuthenticatedStream_InnerRead_d_66 value) {
            return il2cpp::box_value<app::MobileAuthenticatedStream_InnerRead_d_66__Boxed>(get_class(), value);
        }
    } // namespace MobileAuthenticatedStream_InnerRead_d_66
} // namespace app::classes::types
