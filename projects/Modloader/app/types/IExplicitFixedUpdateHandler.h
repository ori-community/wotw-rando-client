#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace IExplicitFixedUpdateHandler {
        inline app::IExplicitFixedUpdateHandler__Class** type_info = (app::IExplicitFixedUpdateHandler__Class**)(modloader::win::memory::resolve_rva(0x0478FCD0));
        inline app::IExplicitFixedUpdateHandler__Class* get_class() {
            return il2cpp::get_class<app::IExplicitFixedUpdateHandler__Class>(type_info, "Moon", "IExplicitFixedUpdateHandler");
        }
        inline app::IExplicitFixedUpdateHandler__Array* create_array(int size) {
            return il2cpp::array_new<app::IExplicitFixedUpdateHandler__Array>(get_class(), size);
        }
        inline app::IExplicitFixedUpdateHandler__Array* create_array(const std::vector<app::IExplicitFixedUpdateHandler*>& items) {
            return il2cpp::array_new<app::IExplicitFixedUpdateHandler__Array>(get_class(), items);
        }
    } // namespace IExplicitFixedUpdateHandler
} // namespace app::classes::types
