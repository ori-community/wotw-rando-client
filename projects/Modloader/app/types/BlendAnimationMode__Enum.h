#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace BlendAnimationMode__Enum {
        namespace {
            inline app::BlendAnimationMode__Enum__Class* type_info_ref = nullptr;
        }
        inline app::BlendAnimationMode__Enum__Class** type_info = &type_info_ref;
        inline app::BlendAnimationMode__Enum__Class* get_class() {
            return il2cpp::get_class<app::BlendAnimationMode__Enum__Class>(type_info, "Moon", "BlendAnimationMode");
        }
        inline app::BlendAnimationMode__Enum* create() {
            return il2cpp::create_object<app::BlendAnimationMode__Enum>(get_class());
        }
    } // namespace BlendAnimationMode__Enum
} // namespace app::classes::types
