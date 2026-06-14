#pragma once
#include <Modloader/app/structs/OverridableColorProperty.h>
#include <Modloader/app/structs/OverridableColorProperty__Array.h>
#include <Modloader/app/structs/OverridableColorProperty__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace OverridableColorProperty {
        inline app::OverridableColorProperty__Class** type_info() {
            static app::OverridableColorProperty__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::OverridableColorProperty__Class**)(modloader::win::memory::resolve_rva(0x0478DB40));
            }
            return cache;
        }
        inline app::OverridableColorProperty__Class* get_class() {
            return il2cpp::get_class<app::OverridableColorProperty__Class>(type_info(), "", "OverridableColorProperty");
        }
        inline app::OverridableColorProperty* create() {
            return il2cpp::create_object<app::OverridableColorProperty>(get_class());
        }
        inline app::OverridableColorProperty__Array* create_array(int size) {
            return il2cpp::array_new<app::OverridableColorProperty__Array>(get_class(), size);
        }
        inline app::OverridableColorProperty__Array* create_array(const std::vector<app::OverridableColorProperty*>& items) {
            return il2cpp::array_new<app::OverridableColorProperty__Array>(get_class(), items);
        }
    } // namespace OverridableColorProperty
} // namespace app::classes::types
