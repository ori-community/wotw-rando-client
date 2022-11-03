#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace IExplicitUpdateHandler {
        inline app::IExplicitUpdateHandler__Class** type_info = (app::IExplicitUpdateHandler__Class**)(modloader::win::memory::resolve_rva(0x04710D00));
        inline app::IExplicitUpdateHandler__Class* get_class() {
            return il2cpp::get_class<app::IExplicitUpdateHandler__Class>(type_info, "Moon", "IExplicitUpdateHandler");
        }
        inline app::IExplicitUpdateHandler__Array* create_array(int size) {
            return il2cpp::array_new<app::IExplicitUpdateHandler__Array>(get_class(), size);
        }
        inline app::IExplicitUpdateHandler__Array* create_array(const std::vector<app::IExplicitUpdateHandler*>& items) {
            return il2cpp::array_new<app::IExplicitUpdateHandler__Array>(get_class(), items);
        }
    } // namespace IExplicitUpdateHandler
} // namespace app::classes::types
