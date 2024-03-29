#pragma once
#include <Modloader/app/structs/WebConnection.h>
#include <Modloader/app/structs/WebConnection__Array.h>
#include <Modloader/app/structs/WebConnection__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace WebConnection {
        inline app::WebConnection__Class** type_info() {
            static app::WebConnection__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::WebConnection__Class**)(modloader::win::memory::resolve_rva(0x04740A50));
            }
            return cache;
        }
        inline app::WebConnection__Class* get_class() {
            return il2cpp::get_class<app::WebConnection__Class>(type_info(), "System.Net", "WebConnection");
        }
        inline app::WebConnection* create() {
            return il2cpp::create_object<app::WebConnection>(get_class());
        }
        inline app::WebConnection__Array* create_array(int size) {
            return il2cpp::array_new<app::WebConnection__Array>(get_class(), size);
        }
        inline app::WebConnection__Array* create_array(const std::vector<app::WebConnection*>& items) {
            return il2cpp::array_new<app::WebConnection__Array>(get_class(), items);
        }
    } // namespace WebConnection
} // namespace app::classes::types
