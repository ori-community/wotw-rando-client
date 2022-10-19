#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace StateValidator {
        inline app::StateValidator__Class** type_info = (app::StateValidator__Class**)(modloader::win::memory::resolve_rva(0x04740BC0));
        inline app::StateValidator__Class* get_class() {
            return il2cpp::get_class<app::StateValidator__Class>(type_info, "", "StateValidator");
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
