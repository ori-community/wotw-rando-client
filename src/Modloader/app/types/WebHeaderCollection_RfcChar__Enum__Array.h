#pragma once
#include <Modloader/app/structs/WebHeaderCollection_RfcChar__Enum__Array.h>
#include <Modloader/app/structs/WebHeaderCollection_RfcChar__Enum__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace WebHeaderCollection_RfcChar__Enum__Array {
        inline app::WebHeaderCollection_RfcChar__Enum__Array__Class** type_info() {
            static app::WebHeaderCollection_RfcChar__Enum__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::WebHeaderCollection_RfcChar__Enum__Array__Class**)(modloader::win::memory::resolve_rva(0x0477A7B8));
            }
            return cache;
        }
        inline app::WebHeaderCollection_RfcChar__Enum__Array__Class* get_class() {
            return il2cpp::get_class<app::WebHeaderCollection_RfcChar__Enum__Array__Class>(type_info(), "System.Net", "WebHeaderCollection+RfcChar[]");
        }
        inline app::WebHeaderCollection_RfcChar__Enum__Array* create() {
            return il2cpp::create_object<app::WebHeaderCollection_RfcChar__Enum__Array>(get_class());
        }
    } // namespace WebHeaderCollection_RfcChar__Enum__Array
} // namespace app::classes::types
