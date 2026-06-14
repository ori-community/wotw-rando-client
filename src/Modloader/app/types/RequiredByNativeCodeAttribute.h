#pragma once
#include <Modloader/app/structs/RequiredByNativeCodeAttribute.h>
#include <Modloader/app/structs/RequiredByNativeCodeAttribute__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace RequiredByNativeCodeAttribute {
        inline app::RequiredByNativeCodeAttribute__Class** type_info() {
            static app::RequiredByNativeCodeAttribute__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::RequiredByNativeCodeAttribute__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::RequiredByNativeCodeAttribute__Class* get_class() {
            return il2cpp::get_class<app::RequiredByNativeCodeAttribute__Class>(type_info(), "UnityEngine.Scripting", "RequiredByNativeCodeAttribute");
        }
        inline app::RequiredByNativeCodeAttribute* create() {
            return il2cpp::create_object<app::RequiredByNativeCodeAttribute>(get_class());
        }
    } // namespace RequiredByNativeCodeAttribute
} // namespace app::classes::types
