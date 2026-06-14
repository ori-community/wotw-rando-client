#pragma once
#include <Modloader/app/structs/ShadowSamplingMode__Enum.h>
#include <Modloader/app/structs/ShadowSamplingMode__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ShadowSamplingMode__Enum {
        inline app::ShadowSamplingMode__Enum__Class** type_info() {
            static app::ShadowSamplingMode__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::ShadowSamplingMode__Enum__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::ShadowSamplingMode__Enum__Class* get_class() {
            return il2cpp::get_class<app::ShadowSamplingMode__Enum__Class>(type_info(), "UnityEngine.Rendering", "ShadowSamplingMode");
        }
        inline app::ShadowSamplingMode__Enum* create() {
            return il2cpp::create_object<app::ShadowSamplingMode__Enum>(get_class());
        }
    } // namespace ShadowSamplingMode__Enum
} // namespace app::classes::types
