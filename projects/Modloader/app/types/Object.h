#pragma once
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/Object__Array.h>
#include <Modloader/app/structs/Object__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace Object {
        inline app::Object__Class** type_info() {
            static app::Object__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::Object__Class**)(modloader::win::memory::resolve_rva(0x0473BE90));
            }
            return cache;
        }
        inline app::Object__Class* get_class() {
            return il2cpp::get_class<app::Object__Class>(type_info(), "System", "Object");
        }
        inline app::Object* create() {
            return il2cpp::create_object<app::Object>(get_class());
        }
        inline app::Object__Array* create_array(int size) {
            return il2cpp::array_new<app::Object__Array>(get_class(), size);
        }
        inline app::Object__Array* create_array(const std::vector<app::Object*>& items) {
            return il2cpp::array_new<app::Object__Array>(get_class(), items);
        }
    } // namespace Object
} // namespace app::classes::types
