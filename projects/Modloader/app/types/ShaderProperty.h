#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/ShaderProperty__Class.h>
#include <Modloader/app/structs/ShaderProperty.h>
#include <Modloader/app/structs/ShaderProperty__Boxed.h>

namespace app::classes::types {
    namespace ShaderProperty {
        namespace {
            inline app::ShaderProperty__Class* type_info_ref = nullptr;
        }
        inline app::ShaderProperty__Class** type_info = &type_info_ref;
        inline app::ShaderProperty__Class* get_class() {
            return il2cpp::get_class<app::ShaderProperty__Class>(type_info, "UberShader", "ShaderProperty");
        }
        inline app::ShaderProperty* create() {
            return il2cpp::create_object<app::ShaderProperty>(get_class());
        }
        inline app::ShaderProperty__Boxed* box(app::ShaderProperty value) {
            return il2cpp::box_value<app::ShaderProperty__Boxed>(get_class(), value);
        }
    } // namespace ShaderProperty
} // namespace app::classes::types
