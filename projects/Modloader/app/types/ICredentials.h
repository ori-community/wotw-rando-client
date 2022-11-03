#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace ICredentials {
        inline app::ICredentials__Class** type_info = (app::ICredentials__Class**)(modloader::win::memory::resolve_rva(0x0475E118));
        inline app::ICredentials__Class* get_class() {
            return il2cpp::get_class<app::ICredentials__Class>(type_info, "System.Net", "ICredentials");
        }
        inline app::ICredentials__Array* create_array(int size) {
            return il2cpp::array_new<app::ICredentials__Array>(get_class(), size);
        }
        inline app::ICredentials__Array* create_array(const std::vector<app::ICredentials*>& items) {
            return il2cpp::array_new<app::ICredentials__Array>(get_class(), items);
        }
    } // namespace ICredentials
} // namespace app::classes::types
