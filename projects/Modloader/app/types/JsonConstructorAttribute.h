#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace JsonConstructorAttribute {
        namespace {
            inline app::JsonConstructorAttribute__Class* type_info_ref = nullptr;
        }
        inline app::JsonConstructorAttribute__Class** type_info = &type_info_ref;
        inline app::JsonConstructorAttribute__Class* get_class() {
            return il2cpp::get_class<app::JsonConstructorAttribute__Class>(type_info, "Newtonsoft.Json", "JsonConstructorAttribute");
        }
        inline app::JsonConstructorAttribute* create() {
            return il2cpp::create_object<app::JsonConstructorAttribute>(get_class());
        }
    } // namespace JsonConstructorAttribute
} // namespace app::classes::types
