#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace WebHeaderCollection_RfcChar__Enum {
        namespace {
            app::WebHeaderCollection_RfcChar__Enum__Class* type_info_ref = nullptr;
        }
        app::WebHeaderCollection_RfcChar__Enum__Class** type_info = &type_info_ref;
        inline app::WebHeaderCollection_RfcChar__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::WebHeaderCollection_RfcChar__Enum__Class>(type_info, "System.Net", "WebHeaderCollection", "RfcChar");
        }
        inline app::WebHeaderCollection_RfcChar__Enum* create() {
            return il2cpp::create_object<app::WebHeaderCollection_RfcChar__Enum>(get_class());
        }
        inline app::WebHeaderCollection_RfcChar__Enum__Array* create_array(int size) {
            return il2cpp::array_new<app::WebHeaderCollection_RfcChar__Enum__Array>(get_class(), size);
        }
        inline app::WebHeaderCollection_RfcChar__Enum__Array* create_array(const std::vector<app::WebHeaderCollection_RfcChar__Enum*>& items) {
            return il2cpp::array_new<app::WebHeaderCollection_RfcChar__Enum__Array>(get_class(), items);
        }
    } // namespace WebHeaderCollection_RfcChar__Enum
} // namespace app::classes::types
