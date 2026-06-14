#pragma once
#include <Modloader/app/structs/OnDeserializingAttribute.h>
#include <Modloader/app/structs/OnDeserializingAttribute__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace OnDeserializingAttribute {
        inline app::OnDeserializingAttribute__Class** type_info() {
            static app::OnDeserializingAttribute__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::OnDeserializingAttribute__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::OnDeserializingAttribute__Class* get_class() {
            return il2cpp::get_class<app::OnDeserializingAttribute__Class>(type_info(), "System.Runtime.Serialization", "OnDeserializingAttribute");
        }
        inline app::OnDeserializingAttribute* create() {
            return il2cpp::create_object<app::OnDeserializingAttribute>(get_class());
        }
    } // namespace OnDeserializingAttribute
} // namespace app::classes::types
