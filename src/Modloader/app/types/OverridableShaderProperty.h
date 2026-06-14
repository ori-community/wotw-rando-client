#pragma once
#include <Modloader/app/structs/OverridableShaderProperty.h>
#include <Modloader/app/structs/OverridableShaderProperty__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace OverridableShaderProperty {
        inline app::OverridableShaderProperty__Class** type_info() {
            static app::OverridableShaderProperty__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::OverridableShaderProperty__Class**)(modloader::win::memory::resolve_rva(0x04787080));
            }
            return cache;
        }
        inline app::OverridableShaderProperty__Class* get_class() {
            return il2cpp::get_class<app::OverridableShaderProperty__Class>(type_info(), "", "OverridableShaderProperty");
        }
        inline app::OverridableShaderProperty* create() {
            return il2cpp::create_object<app::OverridableShaderProperty>(get_class());
        }
    } // namespace OverridableShaderProperty
} // namespace app::classes::types
