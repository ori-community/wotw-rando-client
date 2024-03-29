#pragma once
#include <Modloader/app/structs/ConditionValidator.h>
#include <Modloader/app/structs/ConditionValidator__Array.h>
#include <Modloader/app/structs/ConditionValidator__Boxed.h>
#include <Modloader/app/structs/ConditionValidator__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ConditionValidator {
        inline app::ConditionValidator__Class** type_info() {
            static app::ConditionValidator__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::ConditionValidator__Class**)(modloader::win::memory::resolve_rva(0x04729A20));
            }
            return cache;
        }
        inline app::ConditionValidator__Class* get_class() {
            return il2cpp::get_class<app::ConditionValidator__Class>(type_info(), "", "ConditionValidator");
        }
        inline app::ConditionValidator* create() {
            return il2cpp::create_object<app::ConditionValidator>(get_class());
        }
        inline app::ConditionValidator__Boxed* box(app::ConditionValidator value) {
            return il2cpp::box_value<app::ConditionValidator__Boxed>(get_class(), value);
        }
        inline app::ConditionValidator__Array* create_array(int size) {
            return il2cpp::array_new<app::ConditionValidator__Array>(get_class(), size);
        }
        inline app::ConditionValidator__Array* create_array(const std::vector<app::ConditionValidator>& items) {
            return il2cpp::array_new<app::ConditionValidator__Array>(get_class(), items);
        }
    } // namespace ConditionValidator
} // namespace app::classes::types
