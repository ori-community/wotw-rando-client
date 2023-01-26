#pragma once
#include <Modloader/app/structs/UnmarshalledAttribute.h>
#include <Modloader/app/structs/UnmarshalledAttribute__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace UnmarshalledAttribute {
        inline app::UnmarshalledAttribute__Class** type_info() {
            static app::UnmarshalledAttribute__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::UnmarshalledAttribute__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::UnmarshalledAttribute__Class* get_class() {
            return il2cpp::get_class<app::UnmarshalledAttribute__Class>(type_info(), "UnityEngine.Bindings", "UnmarshalledAttribute");
        }
        inline app::UnmarshalledAttribute* create() {
            return il2cpp::create_object<app::UnmarshalledAttribute>(get_class());
        }
    } // namespace UnmarshalledAttribute
} // namespace app::classes::types
