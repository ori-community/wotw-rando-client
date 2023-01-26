#pragma once
#include <Modloader/app/structs/Double.h>
#include <Modloader/app/structs/Double__Array.h>
#include <Modloader/app/structs/Double__Boxed.h>
#include <Modloader/app/structs/Double__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace Double {
        inline app::Double__Class** type_info() {
            static app::Double__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::Double__Class**)(modloader::win::memory::resolve_rva(0x04726F28));
            }
            return cache;
        }
        inline app::Double__Class* get_class() {
            return il2cpp::get_class<app::Double__Class>(type_info(), "System", "Double");
        }
        inline app::Double* create() {
            return il2cpp::create_object<app::Double>(get_class());
        }
        inline app::Double__Boxed* box(double value) {
            return il2cpp::box_value<app::Double__Boxed>(get_class(), value);
        }
        inline app::Double__Array* create_array(int size) {
            return il2cpp::array_new<app::Double__Array>(get_class(), size);
        }
        inline app::Double__Array* create_array(const std::vector<double>& items) {
            return il2cpp::array_new<app::Double__Array>(get_class(), items);
        }
    } // namespace Double
} // namespace app::classes::types
