#pragma once
#include <Modloader/app/structs/AreaMapIconFilterFooterLabel.h>
#include <Modloader/app/structs/AreaMapIconFilterFooterLabel__Array.h>
#include <Modloader/app/structs/AreaMapIconFilterFooterLabel__Boxed.h>
#include <Modloader/app/structs/AreaMapIconFilterFooterLabel__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace AreaMapIconFilterFooterLabel {
        inline app::AreaMapIconFilterFooterLabel__Class** type_info() {
            static app::AreaMapIconFilterFooterLabel__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::AreaMapIconFilterFooterLabel__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::AreaMapIconFilterFooterLabel__Class* get_class() {
            return il2cpp::get_class<app::AreaMapIconFilterFooterLabel__Class>(type_info(), "", "AreaMapIconFilterFooterLabel");
        }
        inline app::AreaMapIconFilterFooterLabel* create() {
            return il2cpp::create_object<app::AreaMapIconFilterFooterLabel>(get_class());
        }
        inline app::AreaMapIconFilterFooterLabel__Boxed* box(app::AreaMapIconFilterFooterLabel value) {
            return il2cpp::box_value<app::AreaMapIconFilterFooterLabel__Boxed>(get_class(), value);
        }
        inline app::AreaMapIconFilterFooterLabel__Array* create_array(int size) {
            return il2cpp::array_new<app::AreaMapIconFilterFooterLabel__Array>(get_class(), size);
        }
        inline app::AreaMapIconFilterFooterLabel__Array* create_array(const std::vector<app::AreaMapIconFilterFooterLabel>& items) {
            return il2cpp::array_new<app::AreaMapIconFilterFooterLabel__Array>(get_class(), items);
        }
    } // namespace AreaMapIconFilterFooterLabel
} // namespace app::classes::types
