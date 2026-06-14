#pragma once
#include <Modloader/app/structs/AuthenticationHeaderValue.h>
#include <Modloader/app/structs/AuthenticationHeaderValue__Array.h>
#include <Modloader/app/structs/AuthenticationHeaderValue__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace AuthenticationHeaderValue {
        inline app::AuthenticationHeaderValue__Class** type_info() {
            static app::AuthenticationHeaderValue__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::AuthenticationHeaderValue__Class**)(modloader::win::memory::resolve_rva(0x0475D010));
            }
            return cache;
        }
        inline app::AuthenticationHeaderValue__Class* get_class() {
            return il2cpp::get_class<app::AuthenticationHeaderValue__Class>(type_info(), "System.Net.Http.Headers", "AuthenticationHeaderValue");
        }
        inline app::AuthenticationHeaderValue* create() {
            return il2cpp::create_object<app::AuthenticationHeaderValue>(get_class());
        }
        inline app::AuthenticationHeaderValue__Array* create_array(int size) {
            return il2cpp::array_new<app::AuthenticationHeaderValue__Array>(get_class(), size);
        }
        inline app::AuthenticationHeaderValue__Array* create_array(const std::vector<app::AuthenticationHeaderValue*>& items) {
            return il2cpp::array_new<app::AuthenticationHeaderValue__Array>(get_class(), items);
        }
    } // namespace AuthenticationHeaderValue
} // namespace app::classes::types
