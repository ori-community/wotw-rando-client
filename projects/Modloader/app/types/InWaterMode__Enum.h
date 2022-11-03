#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace InWaterMode__Enum {
        inline app::InWaterMode__Enum__Class** type_info = (app::InWaterMode__Enum__Class**)(modloader::win::memory::resolve_rva(0x0477D188));
        inline app::InWaterMode__Enum__Class* get_class() {
            return il2cpp::get_class<app::InWaterMode__Enum__Class>(type_info, "", "InWaterMode");
        }
        inline app::InWaterMode__Enum* create() {
            return il2cpp::create_object<app::InWaterMode__Enum>(get_class());
        }
    } // namespace InWaterMode__Enum
} // namespace app::classes::types
