#pragma once
#include <Modloader/app/structs/NetRes.h>
#include <Modloader/app/structs/NetRes__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace NetRes {
        inline app::NetRes__Class** type_info() {
            static app::NetRes__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::NetRes__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::NetRes__Class* get_class() {
            return il2cpp::get_class<app::NetRes__Class>(type_info(), "System.Net", "NetRes");
        }
        inline app::NetRes* create() {
            return il2cpp::create_object<app::NetRes>(get_class());
        }
    } // namespace NetRes
} // namespace app::classes::types
