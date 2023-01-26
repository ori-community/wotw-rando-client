#pragma once
#include <Modloader/app/structs/NameValueHeaderValue.h>
#include <Modloader/app/structs/NameValueHeaderValue__Array.h>
#include <Modloader/app/structs/NameValueHeaderValue__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace NameValueHeaderValue {
        inline app::NameValueHeaderValue__Class** type_info() {
            static app::NameValueHeaderValue__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::NameValueHeaderValue__Class**)(modloader::win::memory::resolve_rva(0x04745388));
            }
            return cache;
        }
        inline app::NameValueHeaderValue__Class* get_class() {
            return il2cpp::get_class<app::NameValueHeaderValue__Class>(type_info(), "System.Net.Http.Headers", "NameValueHeaderValue");
        }
        inline app::NameValueHeaderValue* create() {
            return il2cpp::create_object<app::NameValueHeaderValue>(get_class());
        }
        inline app::NameValueHeaderValue__Array* create_array(int size) {
            return il2cpp::array_new<app::NameValueHeaderValue__Array>(get_class(), size);
        }
        inline app::NameValueHeaderValue__Array* create_array(const std::vector<app::NameValueHeaderValue*>& items) {
            return il2cpp::array_new<app::NameValueHeaderValue__Array>(get_class(), items);
        }
    } // namespace NameValueHeaderValue
} // namespace app::classes::types
