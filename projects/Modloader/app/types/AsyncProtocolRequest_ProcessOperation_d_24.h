#pragma once
#include <Modloader/app/structs/AsyncProtocolRequest_ProcessOperation_d_24.h>
#include <Modloader/app/structs/AsyncProtocolRequest_ProcessOperation_d_24__Boxed.h>
#include <Modloader/app/structs/AsyncProtocolRequest_ProcessOperation_d_24__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace AsyncProtocolRequest_ProcessOperation_d_24 {
        inline app::AsyncProtocolRequest_ProcessOperation_d_24__Class** type_info() {
            static app::AsyncProtocolRequest_ProcessOperation_d_24__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::AsyncProtocolRequest_ProcessOperation_d_24__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::AsyncProtocolRequest_ProcessOperation_d_24__Class* get_class() {
            return il2cpp::get_nested_class<app::AsyncProtocolRequest_ProcessOperation_d_24__Class>(type_info(), "Mono.Net.Security", "AsyncProtocolRequest", "<ProcessOperation>d__24");
        }
        inline app::AsyncProtocolRequest_ProcessOperation_d_24* create() {
            return il2cpp::create_object<app::AsyncProtocolRequest_ProcessOperation_d_24>(get_class());
        }
        inline app::AsyncProtocolRequest_ProcessOperation_d_24__Boxed* box(app::AsyncProtocolRequest_ProcessOperation_d_24 value) {
            return il2cpp::box_value<app::AsyncProtocolRequest_ProcessOperation_d_24__Boxed>(get_class(), value);
        }
    } // namespace AsyncProtocolRequest_ProcessOperation_d_24
} // namespace app::classes::types
