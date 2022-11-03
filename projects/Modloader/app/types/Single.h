#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace Single {
        inline app::Single__Class** type_info = (app::Single__Class**)(modloader::win::memory::resolve_rva(0x0475E4D8));
        inline app::Single__Class* get_class() {
            return il2cpp::get_class<app::Single__Class>(type_info, "System", "Single");
        }
        inline app::Single* create() {
            return il2cpp::create_object<app::Single>(get_class());
        }
        inline app::Single__Boxed* box(float value) {
            return il2cpp::box_value<app::Single__Boxed>(get_class(), value);
        }
        inline app::Single__Array* create_array(int size) {
            return il2cpp::array_new<app::Single__Array>(get_class(), size);
        }
        inline app::Single__Array* create_array(const std::vector<float>& items) {
            return il2cpp::array_new<app::Single__Array>(get_class(), items);
        }
    } // namespace Single
} // namespace app::classes::types
