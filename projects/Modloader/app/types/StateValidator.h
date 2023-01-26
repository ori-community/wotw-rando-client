#pragma once
#include <Modloader/app/structs/StateValidator.h>
#include <Modloader/app/structs/StateValidator__Array.h>
#include <Modloader/app/structs/StateValidator__Boxed.h>
#include <Modloader/app/structs/StateValidator__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace StateValidator {
        inline app::StateValidator__Class** type_info() {
            static app::StateValidator__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::StateValidator__Class**)(modloader::win::memory::resolve_rva(0x04740BC0));
            }
            return cache;
        }
        inline app::StateValidator__Class* get_class() {
            return il2cpp::get_class<app::StateValidator__Class>(type_info(), "", "StateValidator");
        }
        inline app::StateValidator* create() {
            return il2cpp::create_object<app::StateValidator>(get_class());
        }
        inline app::StateValidator__Boxed* box(app::StateValidator value) {
            return il2cpp::box_value<app::StateValidator__Boxed>(get_class(), value);
        }
        inline app::StateValidator__Array* create_array(int size) {
            return il2cpp::array_new<app::StateValidator__Array>(get_class(), size);
        }
        inline app::StateValidator__Array* create_array(const std::vector<app::StateValidator>& items) {
            return il2cpp::array_new<app::StateValidator__Array>(get_class(), items);
        }
    } // namespace StateValidator
} // namespace app::classes::types
