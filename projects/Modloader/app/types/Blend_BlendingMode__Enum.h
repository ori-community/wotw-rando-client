#pragma once
#include <Modloader/app/structs/Blend_BlendingMode__Enum.h>
#include <Modloader/app/structs/Blend_BlendingMode__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace Blend_BlendingMode__Enum {
        inline app::Blend_BlendingMode__Enum__Class** type_info() {
            static app::Blend_BlendingMode__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::Blend_BlendingMode__Enum__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::Blend_BlendingMode__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::Blend_BlendingMode__Enum__Class>(type_info(), "Colorful", "Blend", "BlendingMode");
        }
        inline app::Blend_BlendingMode__Enum* create() {
            return il2cpp::create_object<app::Blend_BlendingMode__Enum>(get_class());
        }
    } // namespace Blend_BlendingMode__Enum
} // namespace app::classes::types
