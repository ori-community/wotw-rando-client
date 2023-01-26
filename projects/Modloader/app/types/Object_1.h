#pragma once
#include <Modloader/app/structs/Object_1.h>
#include <Modloader/app/structs/Object_1__Array.h>
#include <Modloader/app/structs/Object_1__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace Object_1 {
        inline app::Object_1__Class** type_info() {
            static app::Object_1__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::Object_1__Class**)(modloader::win::memory::resolve_rva(0x047766B8));
            }
            return cache;
        }
        inline app::Object_1__Class* get_class() {
            return il2cpp::get_class<app::Object_1__Class>(type_info(), "UnityEngine", "Object");
        }
        inline app::Object_1* create() {
            return il2cpp::create_object<app::Object_1>(get_class());
        }
        inline app::Object_1__Array* create_array(int size) {
            return il2cpp::array_new<app::Object_1__Array>(get_class(), size);
        }
        inline app::Object_1__Array* create_array(const std::vector<app::Object_1*>& items) {
            return il2cpp::array_new<app::Object_1__Array>(get_class(), items);
        }
    } // namespace Object_1
} // namespace app::classes::types
