#pragma once
#include <Modloader/app/structs/AtlassingSetting.h>
#include <Modloader/app/structs/AtlassingSetting__Array.h>
#include <Modloader/app/structs/AtlassingSetting__Boxed.h>
#include <Modloader/app/structs/AtlassingSetting__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace AtlassingSetting {
        inline app::AtlassingSetting__Class** type_info() {
            static app::AtlassingSetting__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::AtlassingSetting__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::AtlassingSetting__Class* get_class() {
            return il2cpp::get_class<app::AtlassingSetting__Class>(type_info(), "", "AtlassingSetting");
        }
        inline app::AtlassingSetting* create() {
            return il2cpp::create_object<app::AtlassingSetting>(get_class());
        }
        inline app::AtlassingSetting__Boxed* box(app::AtlassingSetting value) {
            return il2cpp::box_value<app::AtlassingSetting__Boxed>(get_class(), value);
        }
        inline app::AtlassingSetting__Array* create_array(int size) {
            return il2cpp::array_new<app::AtlassingSetting__Array>(get_class(), size);
        }
        inline app::AtlassingSetting__Array* create_array(const std::vector<app::AtlassingSetting>& items) {
            return il2cpp::array_new<app::AtlassingSetting__Array>(get_class(), items);
        }
    } // namespace AtlassingSetting
} // namespace app::classes::types
