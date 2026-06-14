#pragma once
#include <Modloader/app/structs/ShadowsMidtonesHighlights_ColorMode__Enum.h>
#include <Modloader/app/structs/ShadowsMidtonesHighlights_ColorMode__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ShadowsMidtonesHighlights_ColorMode__Enum {
        inline app::ShadowsMidtonesHighlights_ColorMode__Enum__Class** type_info() {
            static app::ShadowsMidtonesHighlights_ColorMode__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::ShadowsMidtonesHighlights_ColorMode__Enum__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::ShadowsMidtonesHighlights_ColorMode__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::ShadowsMidtonesHighlights_ColorMode__Enum__Class>(type_info(), "Colorful", "ShadowsMidtonesHighlights", "ColorMode");
        }
        inline app::ShadowsMidtonesHighlights_ColorMode__Enum* create() {
            return il2cpp::create_object<app::ShadowsMidtonesHighlights_ColorMode__Enum>(get_class());
        }
    } // namespace ShadowsMidtonesHighlights_ColorMode__Enum
} // namespace app::classes::types
