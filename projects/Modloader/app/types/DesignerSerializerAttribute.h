#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/DesignerSerializerAttribute__Class.h>
#include <Modloader/app/structs/DesignerSerializerAttribute.h>

namespace app::classes::types {
    namespace DesignerSerializerAttribute {
        namespace {
            inline app::DesignerSerializerAttribute__Class* type_info_ref = nullptr;
        }
        inline app::DesignerSerializerAttribute__Class** type_info = &type_info_ref;
        inline app::DesignerSerializerAttribute__Class* get_class() {
            return il2cpp::get_class<app::DesignerSerializerAttribute__Class>(type_info, "System.ComponentModel.Design.Serialization", "DesignerSerializerAttribute");
        }
        inline app::DesignerSerializerAttribute* create() {
            return il2cpp::create_object<app::DesignerSerializerAttribute>(get_class());
        }
    } // namespace DesignerSerializerAttribute
} // namespace app::classes::types
