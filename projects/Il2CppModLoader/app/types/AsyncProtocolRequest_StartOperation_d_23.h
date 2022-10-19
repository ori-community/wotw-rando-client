#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace AsyncProtocolRequest_StartOperation_d_23 {
        namespace {
            inline app::AsyncProtocolRequest_StartOperation_d_23__Class* type_info_ref = nullptr;
        }
        inline app::AsyncProtocolRequest_StartOperation_d_23__Class** type_info = &type_info_ref;
        inline app::AsyncProtocolRequest_StartOperation_d_23__Class* get_class() {
            return il2cpp::get_nested_class<app::AsyncProtocolRequest_StartOperation_d_23__Class>(type_info, "Mono.Net.Security", "AsyncProtocolRequest", "<StartOperation>d__23");
        }
        inline app::AsyncProtocolRequest_StartOperation_d_23* create() {
            return il2cpp::create_object<app::AsyncProtocolRequest_StartOperation_d_23>(get_class());
        }
        inline app::AsyncProtocolRequest_StartOperation_d_23__Boxed* box(app::AsyncProtocolRequest_StartOperation_d_23 value) {
            return il2cpp::box_value<app::AsyncProtocolRequest_StartOperation_d_23__Boxed>(get_class(), value);
        }
    } // namespace AsyncProtocolRequest_StartOperation_d_23
} // namespace app::classes::types
