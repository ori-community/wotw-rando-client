#pragma once
#include <Modloader/app/structs/Rope_LinkData.h>
#include <Modloader/app/structs/Rope_LinkData__Array.h>
#include <Modloader/app/structs/Rope_LinkData__Boxed.h>
#include <Modloader/app/structs/Rope_LinkData__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace Rope_LinkData {
        inline app::Rope_LinkData__Class** type_info() {
            static app::Rope_LinkData__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::Rope_LinkData__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::Rope_LinkData__Class* get_class() {
            return il2cpp::get_nested_class<app::Rope_LinkData__Class>(type_info(), "", "Rope", "LinkData");
        }
        inline app::Rope_LinkData* create() {
            return il2cpp::create_object<app::Rope_LinkData>(get_class());
        }
        inline app::Rope_LinkData__Boxed* box(app::Rope_LinkData value) {
            return il2cpp::box_value<app::Rope_LinkData__Boxed>(get_class(), value);
        }
        inline app::Rope_LinkData__Array* create_array(int size) {
            return il2cpp::array_new<app::Rope_LinkData__Array>(get_class(), size);
        }
        inline app::Rope_LinkData__Array* create_array(const std::vector<app::Rope_LinkData>& items) {
            return il2cpp::array_new<app::Rope_LinkData__Array>(get_class(), items);
        }
    } // namespace Rope_LinkData
} // namespace app::classes::types
