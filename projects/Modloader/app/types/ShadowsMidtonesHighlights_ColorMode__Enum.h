#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/ShadowsMidtonesHighlights_ColorMode__Enum__Class.h>
#include <Modloader/app/structs/ShadowsMidtonesHighlights_ColorMode__Enum.h>

namespace app::classes::types {
    namespace ShadowsMidtonesHighlights_ColorMode__Enum {
        namespace {
            inline app::ShadowsMidtonesHighlights_ColorMode__Enum__Class* type_info_ref = nullptr;
        }
        inline app::ShadowsMidtonesHighlights_ColorMode__Enum__Class** type_info = &type_info_ref;
        inline app::ShadowsMidtonesHighlights_ColorMode__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::ShadowsMidtonesHighlights_ColorMode__Enum__Class>(type_info, "Colorful", "ShadowsMidtonesHighlights", "ColorMode");
        }
        inline app::ShadowsMidtonesHighlights_ColorMode__Enum* create() {
            return il2cpp::create_object<app::ShadowsMidtonesHighlights_ColorMode__Enum>(get_class());
        }
    } // namespace ShadowsMidtonesHighlights_ColorMode__Enum
} // namespace app::classes::types
