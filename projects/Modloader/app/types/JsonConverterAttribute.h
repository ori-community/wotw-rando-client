#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace JsonConverterAttribute {
        namespace {
            inline app::JsonConverterAttribute__Class* type_info_ref = nullptr;
        }
        inline app::JsonConverterAttribute__Class** type_info = &type_info_ref;
        inline app::JsonConverterAttribute__Class* get_class() {
            return il2cpp::get_class<app::JsonConverterAttribute__Class>(type_info, "Newtonsoft.Json", "JsonConverterAttribute");
        }
        inline app::JsonConverterAttribute* create() {
            return il2cpp::create_object<app::JsonConverterAttribute>(get_class());
        }
    } // namespace JsonConverterAttribute
} // namespace app::classes::types
