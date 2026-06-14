#pragma once
#include <Modloader/app/structs/NativeFixedLengthAttribute.h>
#include <Modloader/app/structs/NativeFixedLengthAttribute__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace NativeFixedLengthAttribute {
        inline app::NativeFixedLengthAttribute__Class** type_info() {
            static app::NativeFixedLengthAttribute__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::NativeFixedLengthAttribute__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::NativeFixedLengthAttribute__Class* get_class() {
            return il2cpp::get_class<app::NativeFixedLengthAttribute__Class>(type_info(), "Unity.Collections", "NativeFixedLengthAttribute");
        }
        inline app::NativeFixedLengthAttribute* create() {
            return il2cpp::create_object<app::NativeFixedLengthAttribute>(get_class());
        }
    } // namespace NativeFixedLengthAttribute
} // namespace app::classes::types
