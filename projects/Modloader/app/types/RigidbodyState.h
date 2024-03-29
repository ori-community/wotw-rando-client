#pragma once
#include <Modloader/app/structs/RigidbodyState.h>
#include <Modloader/app/structs/RigidbodyState__Array.h>
#include <Modloader/app/structs/RigidbodyState__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace RigidbodyState {
        inline app::RigidbodyState__Class** type_info() {
            static app::RigidbodyState__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::RigidbodyState__Class**)(modloader::win::memory::resolve_rva(0x0478AA58));
            }
            return cache;
        }
        inline app::RigidbodyState__Class* get_class() {
            return il2cpp::get_class<app::RigidbodyState__Class>(type_info(), "", "RigidbodyState");
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
