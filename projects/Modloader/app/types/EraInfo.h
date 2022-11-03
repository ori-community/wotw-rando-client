#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace EraInfo {
        inline app::EraInfo__Class** type_info = (app::EraInfo__Class**)(modloader::win::memory::resolve_rva(0x0476CE78));
        inline app::EraInfo__Class* get_class() {
            return il2cpp::get_class<app::EraInfo__Class>(type_info, "System.Globalization", "EraInfo");
        }
        inline app::EraInfo* create() {
            return il2cpp::create_object<app::EraInfo>(get_class());
        }
        inline app::EraInfo__Array* create_array(int size) {
            return il2cpp::array_new<app::EraInfo__Array>(get_class(), size);
        }
        inline app::EraInfo__Array* create_array(const std::vector<app::EraInfo*>& items) {
            return il2cpp::array_new<app::EraInfo__Array>(get_class(), items);
        }
    } // namespace EraInfo
} // namespace app::classes::types
