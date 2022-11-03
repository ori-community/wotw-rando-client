#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace IDebugMenuPage {
        inline app::IDebugMenuPage__Class** type_info = (app::IDebugMenuPage__Class**)(modloader::win::memory::resolve_rva(0x0474ADC8));
        inline app::IDebugMenuPage__Class* get_class() {
            return il2cpp::get_class<app::IDebugMenuPage__Class>(type_info, "", "IDebugMenuPage");
        }
        inline app::IDebugMenuPage__Array* create_array(int size) {
            return il2cpp::array_new<app::IDebugMenuPage__Array>(get_class(), size);
        }
        inline app::IDebugMenuPage__Array* create_array(const std::vector<app::IDebugMenuPage*>& items) {
            return il2cpp::array_new<app::IDebugMenuPage__Array>(get_class(), items);
        }
    } // namespace IDebugMenuPage
} // namespace app::classes::types
