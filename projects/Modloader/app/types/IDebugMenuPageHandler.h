#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace IDebugMenuPageHandler {
        inline app::IDebugMenuPageHandler__Class** type_info = (app::IDebugMenuPageHandler__Class**)(modloader::win::memory::resolve_rva(0x04790A88));
        inline app::IDebugMenuPageHandler__Class* get_class() {
            return il2cpp::get_class<app::IDebugMenuPageHandler__Class>(type_info, "", "IDebugMenuPageHandler");
        }
        inline app::IDebugMenuPageHandler__Array* create_array(int size) {
            return il2cpp::array_new<app::IDebugMenuPageHandler__Array>(get_class(), size);
        }
        inline app::IDebugMenuPageHandler__Array* create_array(const std::vector<app::IDebugMenuPageHandler*>& items) {
            return il2cpp::array_new<app::IDebugMenuPageHandler__Array>(get_class(), items);
        }
    } // namespace IDebugMenuPageHandler
} // namespace app::classes::types
