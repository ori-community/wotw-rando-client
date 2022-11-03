#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace RigidbodyState {
        inline app::RigidbodyState__Class** type_info = (app::RigidbodyState__Class**)(modloader::win::memory::resolve_rva(0x0478AA58));
        inline app::RigidbodyState__Class* get_class() {
            return il2cpp::get_class<app::RigidbodyState__Class>(type_info, "", "RigidbodyState");
        }
        inline app::RigidbodyState* create() {
            return il2cpp::create_object<app::RigidbodyState>(get_class());
        }
        inline app::RigidbodyState__Array* create_array(int size) {
            return il2cpp::array_new<app::RigidbodyState__Array>(get_class(), size);
        }
        inline app::RigidbodyState__Array* create_array(const std::vector<app::RigidbodyState*>& items) {
            return il2cpp::array_new<app::RigidbodyState__Array>(get_class(), items);
        }
    } // namespace RigidbodyState
} // namespace app::classes::types
