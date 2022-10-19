#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace MobileAuthenticatedStream_InnerWrite_d_67 {
        namespace {
            inline app::MobileAuthenticatedStream_InnerWrite_d_67__Class* type_info_ref = nullptr;
        }
        inline app::MobileAuthenticatedStream_InnerWrite_d_67__Class** type_info = &type_info_ref;
        inline app::MobileAuthenticatedStream_InnerWrite_d_67__Class* get_class() {
            return il2cpp::get_nested_class<app::MobileAuthenticatedStream_InnerWrite_d_67__Class>(type_info, "Mono.Net.Security", "MobileAuthenticatedStream", "<InnerWrite>d__67");
        }
        inline app::MobileAuthenticatedStream_InnerWrite_d_67* create() {
            return il2cpp::create_object<app::MobileAuthenticatedStream_InnerWrite_d_67>(get_class());
        }
        inline app::MobileAuthenticatedStream_InnerWrite_d_67__Boxed* box(app::MobileAuthenticatedStream_InnerWrite_d_67 value) {
            return il2cpp::box_value<app::MobileAuthenticatedStream_InnerWrite_d_67__Boxed>(get_class(), value);
        }
    } // namespace MobileAuthenticatedStream_InnerWrite_d_67
} // namespace app::classes::types
