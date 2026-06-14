#pragma once
#include <Modloader/app/structs/OnSerializedAttribute.h>
#include <Modloader/app/structs/OnSerializedAttribute__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace OnSerializedAttribute {
        inline app::OnSerializedAttribute__Class** type_info() {
            static app::OnSerializedAttribute__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::OnSerializedAttribute__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::OnSerializedAttribute__Class* get_class() {
            return il2cpp::get_class<app::OnSerializedAttribute__Class>(type_info(), "System.Runtime.Serialization", "OnSerializedAttribute");
        }
        inline app::OnSerializedAttribute* create() {
            return il2cpp::create_object<app::OnSerializedAttribute>(get_class());
        }
    } // namespace OnSerializedAttribute
} // namespace app::classes::types
