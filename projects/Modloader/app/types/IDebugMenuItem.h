#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/IDebugMenuItem__Class.h>
#include <Modloader/app/structs/IDebugMenuItem__Array.h>
#include <Modloader/app/structs/IDebugMenuItem.h>

namespace app::classes::types {
    namespace IDebugMenuItem {
        inline app::IDebugMenuItem__Class** type_info = (app::IDebugMenuItem__Class**)(modloader::win::memory::resolve_rva(0x04770F78));
        inline app::IDebugMenuItem__Class* get_class() {
            return il2cpp::get_class<app::IDebugMenuItem__Class>(type_info, "", "IDebugMenuItem");
        }
        inline app::IDebugMenuItem__Array* create_array(int size) {
            return il2cpp::array_new<app::IDebugMenuItem__Array>(get_class(), size);
        }
        inline app::IDebugMenuItem__Array* create_array(const std::vector<app::IDebugMenuItem*>& items) {
            return il2cpp::array_new<app::IDebugMenuItem__Array>(get_class(), items);
        }
    } // namespace IDebugMenuItem
} // namespace app::classes::types
