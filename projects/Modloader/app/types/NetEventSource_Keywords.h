#pragma once
#include <Modloader/app/structs/NetEventSource_Keywords.h>
#include <Modloader/app/structs/NetEventSource_Keywords__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace NetEventSource_Keywords {
        inline app::NetEventSource_Keywords__Class** type_info() {
            static app::NetEventSource_Keywords__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::NetEventSource_Keywords__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::NetEventSource_Keywords__Class* get_class() {
            return il2cpp::get_nested_class<app::NetEventSource_Keywords__Class>(type_info(), "System.Net", "NetEventSource", "Keywords");
        }
        inline app::NetEventSource_Keywords* create() {
            return il2cpp::create_object<app::NetEventSource_Keywords>(get_class());
        }
    } // namespace NetEventSource_Keywords
} // namespace app::classes::types
