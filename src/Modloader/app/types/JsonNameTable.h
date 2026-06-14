#pragma once
#include <Modloader/app/structs/JsonNameTable.h>
#include <Modloader/app/structs/JsonNameTable__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace JsonNameTable {
        inline app::JsonNameTable__Class** type_info() {
            static app::JsonNameTable__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::JsonNameTable__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::JsonNameTable__Class* get_class() {
            return il2cpp::get_class<app::JsonNameTable__Class>(type_info(), "Newtonsoft.Json", "JsonNameTable");
        }
        inline app::JsonNameTable* create() {
            return il2cpp::create_object<app::JsonNameTable>(get_class());
        }
    } // namespace JsonNameTable
} // namespace app::classes::types
