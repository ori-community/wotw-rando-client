#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace Canvas {
        inline app::Canvas__Class** type_info = (app::Canvas__Class**)(modloader::win::memory::resolve_rva(0x04734B70));
        inline app::Canvas__Class* get_class() {
            return il2cpp::get_class<app::Canvas__Class>(type_info, "UnityEngine", "Canvas");
        }
        inline app::Canvas* create() {
            return il2cpp::create_object<app::Canvas>(get_class());
        }
        inline app::Canvas__Array* create_array(int size) {
            return il2cpp::array_new<app::Canvas__Array>(get_class(), size);
        }
        inline app::Canvas__Array* create_array(const std::vector<app::Canvas*>& items) {
            return il2cpp::array_new<app::Canvas__Array>(get_class(), items);
        }
    } // namespace Canvas
} // namespace app::classes::types
