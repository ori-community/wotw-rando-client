#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace TimeMeasurerHelper {
        inline app::TimeMeasurerHelper__Class** type_info = (app::TimeMeasurerHelper__Class**)(modloader::win::memory::resolve_rva(0x04722880));
        inline app::TimeMeasurerHelper__Class* get_class() {
            return il2cpp::get_class<app::TimeMeasurerHelper__Class>(type_info, "", "TimeMeasurerHelper");
        }
        inline app::TimeMeasurerHelper* create() {
            return il2cpp::create_object<app::TimeMeasurerHelper>(get_class());
        }
    } // namespace TimeMeasurerHelper
} // namespace app::classes::types
