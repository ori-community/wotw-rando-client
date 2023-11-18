#pragma once
#include <Modloader/app/structs/RootDesignerSerializerAttribute.h>
#include <Modloader/app/structs/RootDesignerSerializerAttribute__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace RootDesignerSerializerAttribute {
        inline app::RootDesignerSerializerAttribute__Class** type_info() {
            static app::RootDesignerSerializerAttribute__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::RootDesignerSerializerAttribute__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::RootDesignerSerializerAttribute__Class* get_class() {
            return il2cpp::get_class<app::RootDesignerSerializerAttribute__Class>(type_info(), "System.ComponentModel.Design.Serialization", "RootDesignerSerializerAttribute");
        }
        inline app::RootDesignerSerializerAttribute* create() {
            return il2cpp::create_object<app::RootDesignerSerializerAttribute>(get_class());
        }
    } // namespace RootDesignerSerializerAttribute
} // namespace app::classes::types
