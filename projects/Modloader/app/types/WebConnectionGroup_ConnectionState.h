#pragma once
#include <Modloader/app/structs/WebConnectionGroup_ConnectionState.h>
#include <Modloader/app/structs/WebConnectionGroup_ConnectionState__Array.h>
#include <Modloader/app/structs/WebConnectionGroup_ConnectionState__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace WebConnectionGroup_ConnectionState {
        inline app::WebConnectionGroup_ConnectionState__Class** type_info() {
            static app::WebConnectionGroup_ConnectionState__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::WebConnectionGroup_ConnectionState__Class**)(modloader::win::memory::resolve_rva(0x0478AB68));
            }
            return cache;
        }
        inline app::WebConnectionGroup_ConnectionState__Class* get_class() {
            return il2cpp::get_nested_class<app::WebConnectionGroup_ConnectionState__Class>(type_info(), "System.Net", "WebConnectionGroup", "ConnectionState");
        }
        inline app::WebConnectionGroup_ConnectionState* create() {
            return il2cpp::create_object<app::WebConnectionGroup_ConnectionState>(get_class());
        }
        inline app::WebConnectionGroup_ConnectionState__Array* create_array(int size) {
            return il2cpp::array_new<app::WebConnectionGroup_ConnectionState__Array>(get_class(), size);
        }
        inline app::WebConnectionGroup_ConnectionState__Array* create_array(const std::vector<app::WebConnectionGroup_ConnectionState*>& items) {
            return il2cpp::array_new<app::WebConnectionGroup_ConnectionState__Array>(get_class(), items);
        }
    } // namespace WebConnectionGroup_ConnectionState
} // namespace app::classes::types
