#pragma once
#include <Modloader/app/structs/NativeArrayOptions__Enum.h>
#include <Modloader/app/structs/NativeArrayOptions__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace NativeArrayOptions__Enum {
        inline app::NativeArrayOptions__Enum__Class** type_info() {
            static app::NativeArrayOptions__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::NativeArrayOptions__Enum__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::NativeArrayOptions__Enum__Class* get_class() {
            return il2cpp::get_class<app::NativeArrayOptions__Enum__Class>(type_info(), "Unity.Collections", "NativeArrayOptions");
        }
        inline app::NativeArrayOptions__Enum* create() {
            return il2cpp::create_object<app::NativeArrayOptions__Enum>(get_class());
        }
    } // namespace NativeArrayOptions__Enum
} // namespace app::classes::types
