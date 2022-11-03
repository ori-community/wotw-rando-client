#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace OverridableFloatProperty {
        inline app::OverridableFloatProperty__Class** type_info = (app::OverridableFloatProperty__Class**)(modloader::win::memory::resolve_rva(0x04758E58));
        inline app::OverridableFloatProperty__Class* get_class() {
            return il2cpp::get_class<app::OverridableFloatProperty__Class>(type_info, "", "OverridableFloatProperty");
        }
        inline app::OverridableFloatProperty* create() {
            return il2cpp::create_object<app::OverridableFloatProperty>(get_class());
        }
        inline app::OverridableFloatProperty__Array* create_array(int size) {
            return il2cpp::array_new<app::OverridableFloatProperty__Array>(get_class(), size);
        }
        inline app::OverridableFloatProperty__Array* create_array(const std::vector<app::OverridableFloatProperty*>& items) {
            return il2cpp::array_new<app::OverridableFloatProperty__Array>(get_class(), items);
        }
    } // namespace OverridableFloatProperty
} // namespace app::classes::types
