#pragma once
#include <Modloader/app/structs/DesignerSerializerAttribute.h>
#include <Modloader/app/structs/DesignerSerializerAttribute__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace DesignerSerializerAttribute {
        inline app::DesignerSerializerAttribute__Class** type_info() {
            static app::DesignerSerializerAttribute__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::DesignerSerializerAttribute__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::DesignerSerializerAttribute__Class* get_class() {
            return il2cpp::get_class<app::DesignerSerializerAttribute__Class>(type_info(), "System.ComponentModel.Design.Serialization", "DesignerSerializerAttribute");
        }
        inline app::DesignerSerializerAttribute* create() {
            return il2cpp::create_object<app::DesignerSerializerAttribute>(get_class());
        }
    } // namespace DesignerSerializerAttribute
} // namespace app::classes::types
