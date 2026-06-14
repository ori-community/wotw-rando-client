#pragma once
#include <Modloader/app/structs/FastVignette_ColorMode__Enum.h>
#include <Modloader/app/structs/FastVignette_ColorMode__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace FastVignette_ColorMode__Enum {
        inline app::FastVignette_ColorMode__Enum__Class** type_info() {
            static app::FastVignette_ColorMode__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::FastVignette_ColorMode__Enum__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::FastVignette_ColorMode__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::FastVignette_ColorMode__Enum__Class>(type_info(), "Colorful", "FastVignette", "ColorMode");
        }
        inline app::FastVignette_ColorMode__Enum* create() {
            return il2cpp::create_object<app::FastVignette_ColorMode__Enum>(get_class());
        }
    } // namespace FastVignette_ColorMode__Enum
} // namespace app::classes::types
