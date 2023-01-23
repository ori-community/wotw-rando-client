#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/DesiredUberStateByte__Class.h>
#include <Modloader/app/structs/DesiredUberStateByte.h>
#include <Modloader/app/structs/DesiredUberStateByte__Array.h>

namespace app::classes::types {
    namespace DesiredUberStateByte {
        inline app::DesiredUberStateByte__Class** type_info = (app::DesiredUberStateByte__Class**)(modloader::win::memory::resolve_rva(0x04704228));
        inline app::DesiredUberStateByte__Class* get_class() {
            return il2cpp::get_class<app::DesiredUberStateByte__Class>(type_info, "", "DesiredUberStateByte");
        }
        inline app::DesiredUberStateByte* create() {
            return il2cpp::create_object<app::DesiredUberStateByte>(get_class());
        }
        inline app::DesiredUberStateByte__Array* create_array(int size) {
            return il2cpp::array_new<app::DesiredUberStateByte__Array>(get_class(), size);
        }
        inline app::DesiredUberStateByte__Array* create_array(const std::vector<app::DesiredUberStateByte*>& items) {
            return il2cpp::array_new<app::DesiredUberStateByte__Array>(get_class(), items);
        }
    } // namespace DesiredUberStateByte
} // namespace app::classes::types
