#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace Action {
        inline app::Action__Class** type_info = (app::Action__Class**)(modloader::win::memory::resolve_rva(0x0471A150));
        inline app::Action__Class* get_class() {
            return il2cpp::get_class<app::Action__Class>(type_info, "System", "Action");
        }
        inline app::Action* create() {
            return il2cpp::create_object<app::Action>(get_class());
        }
        inline app::Action__Array* create_array(int size) {
            return il2cpp::array_new<app::Action__Array>(get_class(), size);
        }
        inline app::Action__Array* create_array(const std::vector<app::Action*>& items) {
            return il2cpp::array_new<app::Action__Array>(get_class(), items);
        }
    } // namespace Action
} // namespace app::classes::types
