#pragma once
#include <Modloader/app/structs/IPAddress.h>
#include <Modloader/app/structs/IPAddress__Array.h>
#include <Modloader/app/structs/IPAddress__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace IPAddress {
        inline app::IPAddress__Class** type_info() {
            static app::IPAddress__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::IPAddress__Class**)(modloader::win::memory::resolve_rva(0x0475CAE0));
            }
            return cache;
        }
        inline app::IPAddress__Class* get_class() {
            return il2cpp::get_class<app::IPAddress__Class>(type_info(), "System.Net", "IPAddress");
        }
        inline app::IPAddress* create() {
            return il2cpp::create_object<app::IPAddress>(get_class());
        }
        inline app::IPAddress__Array* create_array(int size) {
            return il2cpp::array_new<app::IPAddress__Array>(get_class(), size);
        }
        inline app::IPAddress__Array* create_array(const std::vector<app::IPAddress*>& items) {
            return il2cpp::array_new<app::IPAddress__Array>(get_class(), items);
        }
    } // namespace IPAddress
} // namespace app::classes::types
