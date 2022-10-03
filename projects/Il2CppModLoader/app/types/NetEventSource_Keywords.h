#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace NetEventSource_Keywords {
        namespace {
            app::NetEventSource_Keywords__Class* type_info_ref = nullptr;
        }
        app::NetEventSource_Keywords__Class** type_info = &type_info_ref;
        inline app::NetEventSource_Keywords__Class* get_class() {
            return il2cpp::get_nested_class<app::NetEventSource_Keywords__Class>(type_info, "System.Net", "NetEventSource", "Keywords");
        }
        inline app::NetEventSource_Keywords* create() {
            return il2cpp::create_object<app::NetEventSource_Keywords>(get_class());
        }
    } // namespace NetEventSource_Keywords
} // namespace app::classes::types
