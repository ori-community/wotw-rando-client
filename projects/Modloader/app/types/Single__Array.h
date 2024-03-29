#pragma once
#include <Modloader/app/structs/Single__Array.h>
#include <Modloader/app/structs/Single__Array__Array.h>
#include <Modloader/app/structs/Single__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace Single__Array {
        inline app::Single__Array__Class** type_info() {
            static app::Single__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::Single__Array__Class**)(modloader::win::memory::resolve_rva(0x0471BAB0));
            }
            return cache;
        }
        inline app::Single__Array__Class* get_class() {
            return il2cpp::get_class<app::Single__Array__Class>(type_info(), "System", "Single[]");
        }
        inline app::Single__Array* create() {
            return il2cpp::create_object<app::Single__Array>(get_class());
        }
        inline app::Single__Array__Array* create_array(int size) {
            return il2cpp::array_new<app::Single__Array__Array>(get_class(), size);
        }
        inline app::Single__Array__Array* create_array(const std::vector<app::Single__Array*>& items) {
            return il2cpp::array_new<app::Single__Array__Array>(get_class(), items);
        }
    } // namespace Single__Array
} // namespace app::classes::types
