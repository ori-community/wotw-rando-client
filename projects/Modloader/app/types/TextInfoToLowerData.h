#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace TextInfoToLowerData {
        inline app::TextInfoToLowerData__Class** type_info = (app::TextInfoToLowerData__Class**)(modloader::win::memory::resolve_rva(0x04788168));
        inline app::TextInfoToLowerData__Class* get_class() {
            return il2cpp::get_class<app::TextInfoToLowerData__Class>(type_info, "System.Globalization", "TextInfoToLowerData");
        }
        inline app::TextInfoToLowerData* create() {
            return il2cpp::create_object<app::TextInfoToLowerData>(get_class());
        }
    } // namespace TextInfoToLowerData
} // namespace app::classes::types
