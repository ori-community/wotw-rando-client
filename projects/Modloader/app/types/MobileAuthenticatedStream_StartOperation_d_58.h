#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace MobileAuthenticatedStream_StartOperation_d_58 {
        namespace {
            inline app::MobileAuthenticatedStream_StartOperation_d_58__Class* type_info_ref = nullptr;
        }
        inline app::MobileAuthenticatedStream_StartOperation_d_58__Class** type_info = &type_info_ref;
        inline app::MobileAuthenticatedStream_StartOperation_d_58__Class* get_class() {
            return il2cpp::get_nested_class<app::MobileAuthenticatedStream_StartOperation_d_58__Class>(type_info, "Mono.Net.Security", "MobileAuthenticatedStream", "<StartOperation>d__58");
        }
        inline app::MobileAuthenticatedStream_StartOperation_d_58* create() {
            return il2cpp::create_object<app::MobileAuthenticatedStream_StartOperation_d_58>(get_class());
        }
        inline app::MobileAuthenticatedStream_StartOperation_d_58__Boxed* box(app::MobileAuthenticatedStream_StartOperation_d_58 value) {
            return il2cpp::box_value<app::MobileAuthenticatedStream_StartOperation_d_58__Boxed>(get_class(), value);
        }
    } // namespace MobileAuthenticatedStream_StartOperation_d_58
} // namespace app::classes::types
