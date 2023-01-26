#pragma once
#include <Modloader/app/structs/HostHeaderString.h>
#include <Modloader/app/structs/HostHeaderString__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace HostHeaderString {
        inline app::HostHeaderString__Class** type_info() {
            static app::HostHeaderString__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::HostHeaderString__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::HostHeaderString__Class* get_class() {
            return il2cpp::get_class<app::HostHeaderString__Class>(type_info(), "System.Net", "HostHeaderString");
        }
        inline app::HostHeaderString* create() {
            return il2cpp::create_object<app::HostHeaderString>(get_class());
        }
    } // namespace HostHeaderString
} // namespace app::classes::types
