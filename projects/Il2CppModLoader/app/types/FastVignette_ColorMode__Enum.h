#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace FastVignette_ColorMode__Enum {
        namespace {
            inline app::FastVignette_ColorMode__Enum__Class* type_info_ref = nullptr;
        }
        inline app::FastVignette_ColorMode__Enum__Class** type_info = &type_info_ref;
        inline app::FastVignette_ColorMode__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::FastVignette_ColorMode__Enum__Class>(type_info, "Colorful", "FastVignette", "ColorMode");
        }
        inline app::FastVignette_ColorMode__Enum* create() {
            return il2cpp::create_object<app::FastVignette_ColorMode__Enum>(get_class());
        }
    } // namespace FastVignette_ColorMode__Enum
} // namespace app::classes::types
