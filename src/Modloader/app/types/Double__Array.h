#pragma once
#include <Modloader/app/structs/Double__Array.h>
#include <Modloader/app/structs/Double__Array__Array.h>
#include <Modloader/app/structs/Double__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace Double__Array {
        inline app::Double__Array__Class** type_info() {
            static app::Double__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::Double__Array__Class**)(modloader::win::memory::resolve_rva(0x04732178));
            }
            return cache;
        }
        inline app::Double__Array__Class* get_class() {
            return il2cpp::get_class<app::Double__Array__Class>(type_info(), "System", "Double[]");
        }
        inline app::Double__Array* create() {
            return il2cpp::create_object<app::Double__Array>(get_class());
        }
        inline app::Double__Array__Array* create_array(int size) {
            return il2cpp::array_new<app::Double__Array__Array>(get_class(), size);
        }
        inline app::Double__Array__Array* create_array(const std::vector<app::Double__Array*>& items) {
            return il2cpp::array_new<app::Double__Array__Array>(get_class(), items);
        }
    } // namespace Double__Array
} // namespace app::classes::types
