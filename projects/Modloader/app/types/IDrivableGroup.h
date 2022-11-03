#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace IDrivableGroup {
        inline app::IDrivableGroup__Class** type_info = (app::IDrivableGroup__Class**)(modloader::win::memory::resolve_rva(0x04787350));
        inline app::IDrivableGroup__Class* get_class() {
            return il2cpp::get_class<app::IDrivableGroup__Class>(type_info, "Moon", "IDrivableGroup");
        }
        inline app::IDrivableGroup__Array* create_array(int size) {
            return il2cpp::array_new<app::IDrivableGroup__Array>(get_class(), size);
        }
        inline app::IDrivableGroup__Array* create_array(const std::vector<app::IDrivableGroup*>& items) {
            return il2cpp::array_new<app::IDrivableGroup__Array>(get_class(), items);
        }
    } // namespace IDrivableGroup
} // namespace app::classes::types
