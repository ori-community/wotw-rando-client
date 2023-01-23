#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/JsonNameTable__Class.h>
#include <Modloader/app/structs/JsonNameTable.h>

namespace app::classes::types {
    namespace JsonNameTable {
        namespace {
            inline app::JsonNameTable__Class* type_info_ref = nullptr;
        }
        inline app::JsonNameTable__Class** type_info = &type_info_ref;
        inline app::JsonNameTable__Class* get_class() {
            return il2cpp::get_class<app::JsonNameTable__Class>(type_info, "Newtonsoft.Json", "JsonNameTable");
        }
        inline app::JsonNameTable* create() {
            return il2cpp::create_object<app::JsonNameTable>(get_class());
        }
    } // namespace JsonNameTable
} // namespace app::classes::types
