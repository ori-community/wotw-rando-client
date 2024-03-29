#pragma once
#include <Modloader/app/structs/GlobalPlaceholderCountData_Tally.h>
#include <Modloader/app/structs/GlobalPlaceholderCountData_Tally__Array.h>
#include <Modloader/app/structs/GlobalPlaceholderCountData_Tally__Boxed.h>
#include <Modloader/app/structs/GlobalPlaceholderCountData_Tally__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace GlobalPlaceholderCountData_Tally {
        inline app::GlobalPlaceholderCountData_Tally__Class** type_info() {
            static app::GlobalPlaceholderCountData_Tally__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::GlobalPlaceholderCountData_Tally__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::GlobalPlaceholderCountData_Tally__Class* get_class() {
            return il2cpp::get_nested_class<app::GlobalPlaceholderCountData_Tally__Class>(type_info(), "", "GlobalPlaceholderCountData", "Tally");
        }
        inline app::GlobalPlaceholderCountData_Tally* create() {
            return il2cpp::create_object<app::GlobalPlaceholderCountData_Tally>(get_class());
        }
        inline app::GlobalPlaceholderCountData_Tally__Boxed* box(app::GlobalPlaceholderCountData_Tally value) {
            return il2cpp::box_value<app::GlobalPlaceholderCountData_Tally__Boxed>(get_class(), value);
        }
        inline app::GlobalPlaceholderCountData_Tally__Array* create_array(int size) {
            return il2cpp::array_new<app::GlobalPlaceholderCountData_Tally__Array>(get_class(), size);
        }
        inline app::GlobalPlaceholderCountData_Tally__Array* create_array(const std::vector<app::GlobalPlaceholderCountData_Tally>& items) {
            return il2cpp::array_new<app::GlobalPlaceholderCountData_Tally__Array>(get_class(), items);
        }
    } // namespace GlobalPlaceholderCountData_Tally
} // namespace app::classes::types
