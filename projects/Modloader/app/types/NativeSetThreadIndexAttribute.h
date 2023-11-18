#pragma once
#include <Modloader/app/structs/NativeSetThreadIndexAttribute.h>
#include <Modloader/app/structs/NativeSetThreadIndexAttribute__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace NativeSetThreadIndexAttribute {
        inline app::NativeSetThreadIndexAttribute__Class** type_info() {
            static app::NativeSetThreadIndexAttribute__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::NativeSetThreadIndexAttribute__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::NativeSetThreadIndexAttribute__Class* get_class() {
            return il2cpp::get_class<app::NativeSetThreadIndexAttribute__Class>(type_info(), "Unity.Collections.LowLevel.Unsafe", "NativeSetThreadIndexAttribute");
        }
        inline app::NativeSetThreadIndexAttribute* create() {
            return il2cpp::create_object<app::NativeSetThreadIndexAttribute>(get_class());
        }
    } // namespace NativeSetThreadIndexAttribute
} // namespace app::classes::types
