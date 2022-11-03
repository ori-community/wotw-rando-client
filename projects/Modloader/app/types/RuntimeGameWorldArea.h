#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace RuntimeGameWorldArea {
        inline app::RuntimeGameWorldArea__Class** type_info = (app::RuntimeGameWorldArea__Class**)(modloader::win::memory::resolve_rva(0x04761DF0));
        inline app::RuntimeGameWorldArea__Class* get_class() {
            return il2cpp::get_class<app::RuntimeGameWorldArea__Class>(type_info, "", "RuntimeGameWorldArea");
        }
        inline app::RuntimeGameWorldArea* create() {
            return il2cpp::create_object<app::RuntimeGameWorldArea>(get_class());
        }
        inline app::RuntimeGameWorldArea__Array* create_array(int size) {
            return il2cpp::array_new<app::RuntimeGameWorldArea__Array>(get_class(), size);
        }
        inline app::RuntimeGameWorldArea__Array* create_array(const std::vector<app::RuntimeGameWorldArea*>& items) {
            return il2cpp::array_new<app::RuntimeGameWorldArea__Array>(get_class(), items);
        }
    } // namespace RuntimeGameWorldArea
} // namespace app::classes::types
