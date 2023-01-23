#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/IRuntimeDynamicDataLink__Class.h>
#include <Modloader/app/structs/IRuntimeDynamicDataLink__Array.h>
#include <Modloader/app/structs/IRuntimeDynamicDataLink.h>

namespace app::classes::types {
    namespace IRuntimeDynamicDataLink {
        inline app::IRuntimeDynamicDataLink__Class** type_info = (app::IRuntimeDynamicDataLink__Class**)(modloader::win::memory::resolve_rva(0x04749DA8));
        inline app::IRuntimeDynamicDataLink__Class* get_class() {
            return il2cpp::get_class<app::IRuntimeDynamicDataLink__Class>(type_info, "Moon", "IRuntimeDynamicDataLink");
        }
        inline app::IRuntimeDynamicDataLink__Array* create_array(int size) {
            return il2cpp::array_new<app::IRuntimeDynamicDataLink__Array>(get_class(), size);
        }
        inline app::IRuntimeDynamicDataLink__Array* create_array(const std::vector<app::IRuntimeDynamicDataLink*>& items) {
            return il2cpp::array_new<app::IRuntimeDynamicDataLink__Array>(get_class(), items);
        }
    } // namespace IRuntimeDynamicDataLink
} // namespace app::classes::types
