#pragma once
#include <Modloader/app/structs/Vector2__Array.h>
#include <Modloader/app/structs/Vector2__Array__Array.h>
#include <Modloader/app/structs/Vector2__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace Vector2__Array {
        inline app::Vector2__Array__Class** type_info() {
            static app::Vector2__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::Vector2__Array__Class**)(modloader::win::memory::resolve_rva(0x047349C8));
            }
            return cache;
        }
        inline app::Vector2__Array__Class* get_class() {
            return il2cpp::get_class<app::Vector2__Array__Class>(type_info(), "UnityEngine", "Vector2[]");
        }
        inline app::Vector2__Array* create() {
            return il2cpp::create_object<app::Vector2__Array>(get_class());
        }
        inline app::Vector2__Array__Array* create_array(int size) {
            return il2cpp::array_new<app::Vector2__Array__Array>(get_class(), size);
        }
        inline app::Vector2__Array__Array* create_array(const std::vector<app::Vector2__Array*>& items) {
            return il2cpp::array_new<app::Vector2__Array__Array>(get_class(), items);
        }
    } // namespace Vector2__Array
} // namespace app::classes::types
