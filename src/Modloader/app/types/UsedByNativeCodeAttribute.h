#pragma once
#include <Modloader/app/structs/UsedByNativeCodeAttribute.h>
#include <Modloader/app/structs/UsedByNativeCodeAttribute__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace UsedByNativeCodeAttribute {
        inline app::UsedByNativeCodeAttribute__Class** type_info() {
            static app::UsedByNativeCodeAttribute__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::UsedByNativeCodeAttribute__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::UsedByNativeCodeAttribute__Class* get_class() {
            return il2cpp::get_class<app::UsedByNativeCodeAttribute__Class>(type_info(), "UnityEngine.Scripting", "UsedByNativeCodeAttribute");
        }
        inline app::UsedByNativeCodeAttribute* create() {
            return il2cpp::create_object<app::UsedByNativeCodeAttribute>(get_class());
        }
    } // namespace UsedByNativeCodeAttribute
} // namespace app::classes::types
