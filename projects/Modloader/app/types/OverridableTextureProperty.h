#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace OverridableTextureProperty {
        inline app::OverridableTextureProperty__Class** type_info = (app::OverridableTextureProperty__Class**)(modloader::win::memory::resolve_rva(0x0472B750));
        inline app::OverridableTextureProperty__Class* get_class() {
            return il2cpp::get_class<app::OverridableTextureProperty__Class>(type_info, "", "OverridableTextureProperty");
        }
        inline app::OverridableTextureProperty* create() {
            return il2cpp::create_object<app::OverridableTextureProperty>(get_class());
        }
        inline app::OverridableTextureProperty__Array* create_array(int size) {
            return il2cpp::array_new<app::OverridableTextureProperty__Array>(get_class(), size);
        }
        inline app::OverridableTextureProperty__Array* create_array(const std::vector<app::OverridableTextureProperty*>& items) {
            return il2cpp::array_new<app::OverridableTextureProperty__Array>(get_class(), items);
        }
    } // namespace OverridableTextureProperty
} // namespace app::classes::types
