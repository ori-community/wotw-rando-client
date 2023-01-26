#pragma once
#include <Modloader/app/structs/OnSerializingAttribute.h>
#include <Modloader/app/structs/OnSerializingAttribute__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace OnSerializingAttribute {
        inline app::OnSerializingAttribute__Class** type_info() {
            static app::OnSerializingAttribute__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::OnSerializingAttribute__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::OnSerializingAttribute__Class* get_class() {
            return il2cpp::get_class<app::OnSerializingAttribute__Class>(type_info(), "System.Runtime.Serialization", "OnSerializingAttribute");
        }
        inline app::OnSerializingAttribute* create() {
            return il2cpp::create_object<app::OnSerializingAttribute>(get_class());
        }
    } // namespace OnSerializingAttribute
} // namespace app::classes::types
