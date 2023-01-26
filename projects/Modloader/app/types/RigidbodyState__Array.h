#pragma once
#include <Modloader/app/structs/RigidbodyState__Array.h>
#include <Modloader/app/structs/RigidbodyState__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace RigidbodyState__Array {
        inline app::RigidbodyState__Array__Class** type_info() {
            static app::RigidbodyState__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::RigidbodyState__Array__Class**)(modloader::win::memory::resolve_rva(0x04750988));
            }
            return cache;
        }
        inline app::RigidbodyState__Array__Class* get_class() {
            return il2cpp::get_class<app::RigidbodyState__Array__Class>(type_info(), "", "RigidbodyState[]");
        }
        inline app::RigidbodyState__Array* create() {
            return il2cpp::create_object<app::RigidbodyState__Array>(get_class());
        }
    } // namespace RigidbodyState__Array
} // namespace app::classes::types
