#pragma once
#include <Modloader/app/structs/AuthenticatedStream.h>
#include <Modloader/app/structs/AuthenticatedStream__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace AuthenticatedStream {
        inline app::AuthenticatedStream__Class** type_info() {
            static app::AuthenticatedStream__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::AuthenticatedStream__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::AuthenticatedStream__Class* get_class() {
            return il2cpp::get_class<app::AuthenticatedStream__Class>(type_info(), "System.Net.Security", "AuthenticatedStream");
        }
        inline app::AuthenticatedStream* create() {
            return il2cpp::create_object<app::AuthenticatedStream>(get_class());
        }
    } // namespace AuthenticatedStream
} // namespace app::classes::types
