#pragma once
#include <Modloader/app/structs/WebHeaderCollection_RfcChar__Enum.h>
#include <Modloader/app/structs/WebHeaderCollection_RfcChar__Enum__Array.h>
#include <Modloader/app/structs/WebHeaderCollection_RfcChar__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace WebHeaderCollection_RfcChar__Enum {
        inline app::WebHeaderCollection_RfcChar__Enum__Class** type_info() {
            static app::WebHeaderCollection_RfcChar__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::WebHeaderCollection_RfcChar__Enum__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::WebHeaderCollection_RfcChar__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::WebHeaderCollection_RfcChar__Enum__Class>(type_info(), "System.Net", "WebHeaderCollection", "RfcChar");
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
