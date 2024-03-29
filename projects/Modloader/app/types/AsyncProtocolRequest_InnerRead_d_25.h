#pragma once
#include <Modloader/app/structs/AsyncProtocolRequest_InnerRead_d_25.h>
#include <Modloader/app/structs/AsyncProtocolRequest_InnerRead_d_25__Boxed.h>
#include <Modloader/app/structs/AsyncProtocolRequest_InnerRead_d_25__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace AsyncProtocolRequest_InnerRead_d_25 {
        inline app::AsyncProtocolRequest_InnerRead_d_25__Class** type_info() {
            static app::AsyncProtocolRequest_InnerRead_d_25__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::AsyncProtocolRequest_InnerRead_d_25__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::AsyncProtocolRequest_InnerRead_d_25__Class* get_class() {
            return il2cpp::get_nested_class<app::AsyncProtocolRequest_InnerRead_d_25__Class>(type_info(), "Mono.Net.Security", "AsyncProtocolRequest", "<InnerRead>d__25");
        }
        inline app::AsyncProtocolRequest_InnerRead_d_25* create() {
            return il2cpp::create_object<app::AsyncProtocolRequest_InnerRead_d_25>(get_class());
        }
        inline app::AsyncProtocolRequest_InnerRead_d_25__Boxed* box(app::AsyncProtocolRequest_InnerRead_d_25 value) {
            return il2cpp::box_value<app::AsyncProtocolRequest_InnerRead_d_25__Boxed>(get_class(), value);
        }
    } // namespace AsyncProtocolRequest_InnerRead_d_25
} // namespace app::classes::types
