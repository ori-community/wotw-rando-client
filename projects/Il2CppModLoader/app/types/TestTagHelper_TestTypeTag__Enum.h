#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace TestTagHelper_TestTypeTag__Enum {
        extern IL2CPP_MODLOADER_DLLEXPORT app::TestTagHelper_TestTypeTag__Enum__Class** type_info;
        inline app::TestTagHelper_TestTypeTag__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::TestTagHelper_TestTypeTag__Enum__Class>(type_info, "", "TestTagHelper", "TestTypeTag");
        }
        inline app::TestTagHelper_TestTypeTag__Enum* create() {
            return il2cpp::create_object<app::TestTagHelper_TestTypeTag__Enum>(get_class());
        }
    } // namespace TestTagHelper_TestTypeTag__Enum
} // namespace app::classes::types
