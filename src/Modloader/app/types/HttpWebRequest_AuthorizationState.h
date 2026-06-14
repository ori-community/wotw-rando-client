#pragma once
#include <Modloader/app/structs/HttpWebRequest_AuthorizationState.h>
#include <Modloader/app/structs/HttpWebRequest_AuthorizationState__Boxed.h>
#include <Modloader/app/structs/HttpWebRequest_AuthorizationState__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace HttpWebRequest_AuthorizationState {
        inline app::HttpWebRequest_AuthorizationState__Class** type_info() {
            static app::HttpWebRequest_AuthorizationState__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::HttpWebRequest_AuthorizationState__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::HttpWebRequest_AuthorizationState__Class* get_class() {
            return il2cpp::get_nested_class<app::HttpWebRequest_AuthorizationState__Class>(type_info(), "System.Net", "HttpWebRequest", "AuthorizationState");
        }
        inline app::HttpWebRequest_AuthorizationState* create() {
            return il2cpp::create_object<app::HttpWebRequest_AuthorizationState>(get_class());
        }
        inline app::HttpWebRequest_AuthorizationState__Boxed* box(app::HttpWebRequest_AuthorizationState value) {
            return il2cpp::box_value<app::HttpWebRequest_AuthorizationState__Boxed>(get_class(), value);
        }
    } // namespace HttpWebRequest_AuthorizationState
} // namespace app::classes::types
