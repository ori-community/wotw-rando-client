#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace PrimitiveTypeCode__Enum {
        extern IL2CPP_MODLOADER_DLLEXPORT app::PrimitiveTypeCode__Enum__Class** type_info;
        inline app::PrimitiveTypeCode__Enum__Class* get_class() {
            return il2cpp::get_class<app::PrimitiveTypeCode__Enum__Class>(type_info, "Newtonsoft.Json.Utilities", "PrimitiveTypeCode");
        }
        inline app::PrimitiveTypeCode__Enum* create() {
            return il2cpp::create_object<app::PrimitiveTypeCode__Enum>(get_class());
        }
        inline app::PrimitiveTypeCode__Enum__Array* create_array(int size) {
            return il2cpp::array_new<app::PrimitiveTypeCode__Enum__Array>(get_class(), size);
        }
        inline app::PrimitiveTypeCode__Enum__Array* create_array(const std::vector<app::PrimitiveTypeCode__Enum__Boxed*>& items) {
            return il2cpp::array_new<app::PrimitiveTypeCode__Enum__Array>(get_class(), items);
        }
    } // namespace PrimitiveTypeCode__Enum
} // namespace app::classes::types
