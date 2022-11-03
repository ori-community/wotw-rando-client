#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace MoonGuid {
        inline app::MoonGuid__Class** type_info = (app::MoonGuid__Class**)(modloader::win::memory::resolve_rva(0x04715140));
        inline app::MoonGuid__Class* get_class() {
            return il2cpp::get_class<app::MoonGuid__Class>(type_info, "", "MoonGuid");
        }
        inline app::MoonGuid* create() {
            return il2cpp::create_object<app::MoonGuid>(get_class());
        }
        inline app::MoonGuid__Array* create_array(int size) {
            return il2cpp::array_new<app::MoonGuid__Array>(get_class(), size);
        }
        inline app::MoonGuid__Array* create_array(const std::vector<app::MoonGuid*>& items) {
            return il2cpp::array_new<app::MoonGuid__Array>(get_class(), items);
        }
    } // namespace MoonGuid
} // namespace app::classes::types
