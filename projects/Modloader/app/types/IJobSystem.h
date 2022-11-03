#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace IJobSystem {
        inline app::IJobSystem__Class** type_info = (app::IJobSystem__Class**)(modloader::win::memory::resolve_rva(0x047221E0));
        inline app::IJobSystem__Class* get_class() {
            return il2cpp::get_class<app::IJobSystem__Class>(type_info, "Moon.Jobs", "IJobSystem");
        }
        inline app::IJobSystem__Array* create_array(int size) {
            return il2cpp::array_new<app::IJobSystem__Array>(get_class(), size);
        }
        inline app::IJobSystem__Array* create_array(const std::vector<app::IJobSystem*>& items) {
            return il2cpp::array_new<app::IJobSystem__Array>(get_class(), items);
        }
    } // namespace IJobSystem
} // namespace app::classes::types
