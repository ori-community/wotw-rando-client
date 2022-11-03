#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace AnalogueInputData {
        inline app::AnalogueInputData__Class** type_info = (app::AnalogueInputData__Class**)(modloader::win::memory::resolve_rva(0x0477CAB8));
        inline app::AnalogueInputData__Class* get_class() {
            return il2cpp::get_class<app::AnalogueInputData__Class>(type_info, "", "AnalogueInputData");
        }
        inline app::AnalogueInputData* create() {
            return il2cpp::create_object<app::AnalogueInputData>(get_class());
        }
    } // namespace AnalogueInputData
} // namespace app::classes::types
