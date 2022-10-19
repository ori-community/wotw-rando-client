#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace RootDesignerSerializerAttribute {
        namespace {
            inline app::RootDesignerSerializerAttribute__Class* type_info_ref = nullptr;
        }
        inline app::RootDesignerSerializerAttribute__Class** type_info = &type_info_ref;
        inline app::RootDesignerSerializerAttribute__Class* get_class() {
            return il2cpp::get_class<app::RootDesignerSerializerAttribute__Class>(type_info, "System.ComponentModel.Design.Serialization", "RootDesignerSerializerAttribute");
        }
        inline app::RootDesignerSerializerAttribute* create() {
            return il2cpp::create_object<app::RootDesignerSerializerAttribute>(get_class());
        }
    } // namespace RootDesignerSerializerAttribute
} // namespace app::classes::types
