#pragma once
#include <Modloader/app/structs/MobileAuthenticatedStream_InnerWrite_d_67.h>
#include <Modloader/app/structs/MobileAuthenticatedStream_InnerWrite_d_67__Boxed.h>
#include <Modloader/app/structs/MobileAuthenticatedStream_InnerWrite_d_67__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace MobileAuthenticatedStream_InnerWrite_d_67 {
        inline app::MobileAuthenticatedStream_InnerWrite_d_67__Class** type_info() {
            static app::MobileAuthenticatedStream_InnerWrite_d_67__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::MobileAuthenticatedStream_InnerWrite_d_67__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::MobileAuthenticatedStream_InnerWrite_d_67__Class* get_class() {
            return il2cpp::get_nested_class<app::MobileAuthenticatedStream_InnerWrite_d_67__Class>(type_info(), "Mono.Net.Security", "MobileAuthenticatedStream", "<InnerWrite>d__67");
        }
        inline app::MobileAuthenticatedStream_InnerWrite_d_67* create() {
            return il2cpp::create_object<app::MobileAuthenticatedStream_InnerWrite_d_67>(get_class());
        }
        inline app::MobileAuthenticatedStream_InnerWrite_d_67__Boxed* box(app::MobileAuthenticatedStream_InnerWrite_d_67 value) {
            return il2cpp::box_value<app::MobileAuthenticatedStream_InnerWrite_d_67__Boxed>(get_class(), value);
        }
    } // namespace MobileAuthenticatedStream_InnerWrite_d_67
} // namespace app::classes::types
