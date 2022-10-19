#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace AsyncProtocolRequest_ProcessOperation_d_24 {
        namespace {
            inline app::AsyncProtocolRequest_ProcessOperation_d_24__Class* type_info_ref = nullptr;
        }
        inline app::AsyncProtocolRequest_ProcessOperation_d_24__Class** type_info = &type_info_ref;
        inline app::AsyncProtocolRequest_ProcessOperation_d_24__Class* get_class() {
            return il2cpp::get_nested_class<app::AsyncProtocolRequest_ProcessOperation_d_24__Class>(type_info, "Mono.Net.Security", "AsyncProtocolRequest", "<ProcessOperation>d__24");
        }
        inline app::AsyncProtocolRequest_ProcessOperation_d_24* create() {
            return il2cpp::create_object<app::AsyncProtocolRequest_ProcessOperation_d_24>(get_class());
        }
        inline app::AsyncProtocolRequest_ProcessOperation_d_24__Boxed* box(app::AsyncProtocolRequest_ProcessOperation_d_24 value) {
            return il2cpp::box_value<app::AsyncProtocolRequest_ProcessOperation_d_24__Boxed>(get_class(), value);
        }
    } // namespace AsyncProtocolRequest_ProcessOperation_d_24
} // namespace app::classes::types
