#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/IDeathUberStateSetter__Class.h>
#include <Modloader/app/structs/IDeathUberStateSetter__Array.h>
#include <Modloader/app/structs/IDeathUberStateSetter.h>

namespace app::classes::types {
    namespace IDeathUberStateSetter {
        inline app::IDeathUberStateSetter__Class** type_info = (app::IDeathUberStateSetter__Class**)(modloader::win::memory::resolve_rva(0x04732480));
        inline app::IDeathUberStateSetter__Class* get_class() {
            return il2cpp::get_class<app::IDeathUberStateSetter__Class>(type_info, "", "IDeathUberStateSetter");
        }
        inline app::IDeathUberStateSetter__Array* create_array(int size) {
            return il2cpp::array_new<app::IDeathUberStateSetter__Array>(get_class(), size);
        }
        inline app::IDeathUberStateSetter__Array* create_array(const std::vector<app::IDeathUberStateSetter*>& items) {
            return il2cpp::array_new<app::IDeathUberStateSetter__Array>(get_class(), items);
        }
    } // namespace IDeathUberStateSetter
} // namespace app::classes::types
