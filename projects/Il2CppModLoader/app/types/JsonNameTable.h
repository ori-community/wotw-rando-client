#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace JsonNameTable {
        namespace {
            app::JsonNameTable__Class* type_info_ref = nullptr;
        }
        app::JsonNameTable__Class** type_info = &type_info_ref;
        inline app::JsonNameTable__Class* get_class() {
            return il2cpp::get_class<app::JsonNameTable__Class>(type_info, "Newtonsoft.Json", "JsonNameTable");
        }
        inline app::JsonNameTable* create() {
            return il2cpp::create_object<app::JsonNameTable>(get_class());
        }
    } // namespace JsonNameTable
} // namespace app::classes::types
