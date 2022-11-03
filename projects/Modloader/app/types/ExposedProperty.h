#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace ExposedProperty {
        namespace {
            inline app::ExposedProperty__Class* type_info_ref = nullptr;
        }
        inline app::ExposedProperty__Class** type_info = &type_info_ref;
        inline app::ExposedProperty__Class* get_class() {
            return il2cpp::get_class<app::ExposedProperty__Class>(type_info, "Moon.ExposedPropertiesInspector", "ExposedProperty");
        }
        inline app::ExposedProperty* create() {
            return il2cpp::create_object<app::ExposedProperty>(get_class());
        }
        inline app::ExposedProperty__Array* create_array(int size) {
            return il2cpp::array_new<app::ExposedProperty__Array>(get_class(), size);
        }
        inline app::ExposedProperty__Array* create_array(const std::vector<app::ExposedProperty*>& items) {
            return il2cpp::array_new<app::ExposedProperty__Array>(get_class(), items);
        }
    } // namespace ExposedProperty
} // namespace app::classes::types
