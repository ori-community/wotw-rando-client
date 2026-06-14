#pragma once
#include <Modloader/app/structs/NativeAsStructAttribute.h>
#include <Modloader/app/structs/NativeAsStructAttribute__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace NativeAsStructAttribute {
        inline app::NativeAsStructAttribute__Class** type_info() {
            static app::NativeAsStructAttribute__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::NativeAsStructAttribute__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::NativeAsStructAttribute__Class* get_class() {
            return il2cpp::get_class<app::NativeAsStructAttribute__Class>(type_info(), "UnityEngine.Bindings", "NativeAsStructAttribute");
        }
        inline app::NativeAsStructAttribute* create() {
            return il2cpp::create_object<app::NativeAsStructAttribute>(get_class());
        }
    } // namespace NativeAsStructAttribute
} // namespace app::classes::types
