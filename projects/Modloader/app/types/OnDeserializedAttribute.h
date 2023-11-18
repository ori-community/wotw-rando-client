#pragma once
#include <Modloader/app/structs/OnDeserializedAttribute.h>
#include <Modloader/app/structs/OnDeserializedAttribute__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace OnDeserializedAttribute {
        inline app::OnDeserializedAttribute__Class** type_info() {
            static app::OnDeserializedAttribute__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::OnDeserializedAttribute__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::OnDeserializedAttribute__Class* get_class() {
            return il2cpp::get_class<app::OnDeserializedAttribute__Class>(type_info(), "System.Runtime.Serialization", "OnDeserializedAttribute");
        }
        inline app::OnDeserializedAttribute* create() {
            return il2cpp::create_object<app::OnDeserializedAttribute>(get_class());
        }
    } // namespace OnDeserializedAttribute
} // namespace app::classes::types
