#pragma once
#include <Modloader/app/structs/Cookie.h>
#include <Modloader/app/structs/Cookie__Array.h>
#include <Modloader/app/structs/Cookie__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace Cookie {
        inline app::Cookie__Class** type_info() {
            static app::Cookie__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::Cookie__Class**)(modloader::win::memory::resolve_rva(0x0473DC50));
            }
            return cache;
        }
        inline app::Cookie__Class* get_class() {
            return il2cpp::get_class<app::Cookie__Class>(type_info(), "System.Net", "Cookie");
        }
        inline app::Cookie* create() {
            return il2cpp::create_object<app::Cookie>(get_class());
        }
        inline app::Cookie__Array* create_array(int size) {
            return il2cpp::array_new<app::Cookie__Array>(get_class(), size);
        }
        inline app::Cookie__Array* create_array(const std::vector<app::Cookie*>& items) {
            return il2cpp::array_new<app::Cookie__Array>(get_class(), items);
        }
    } // namespace Cookie
} // namespace app::classes::types
