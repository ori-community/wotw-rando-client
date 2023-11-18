#pragma once
#include <Modloader/app/structs/StateFovModifier.h>
#include <Modloader/app/structs/StateFovModifier__Array.h>
#include <Modloader/app/structs/StateFovModifier__Boxed.h>
#include <Modloader/app/structs/StateFovModifier__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace StateFovModifier {
        inline app::StateFovModifier__Class** type_info() {
            static app::StateFovModifier__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::StateFovModifier__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::StateFovModifier__Class* get_class() {
            return il2cpp::get_class<app::StateFovModifier__Class>(type_info(), "", "StateFovModifier");
        }
        inline app::StateFovModifier* create() {
            return il2cpp::create_object<app::StateFovModifier>(get_class());
        }
        inline app::StateFovModifier__Boxed* box(app::StateFovModifier value) {
            return il2cpp::box_value<app::StateFovModifier__Boxed>(get_class(), value);
        }
        inline app::StateFovModifier__Array* create_array(int size) {
            return il2cpp::array_new<app::StateFovModifier__Array>(get_class(), size);
        }
        inline app::StateFovModifier__Array* create_array(const std::vector<app::StateFovModifier>& items) {
            return il2cpp::array_new<app::StateFovModifier__Array>(get_class(), items);
        }
    } // namespace StateFovModifier
} // namespace app::classes::types
