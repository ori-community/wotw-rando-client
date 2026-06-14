#pragma once
#include <Modloader/app/structs/AnalogueInputData.h>
#include <Modloader/app/structs/AnalogueInputData__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace AnalogueInputData {
        inline app::AnalogueInputData__Class** type_info() {
            static app::AnalogueInputData__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::AnalogueInputData__Class**)(modloader::win::memory::resolve_rva(0x0477CAB8));
            }
            return cache;
        }
        inline app::AnalogueInputData__Class* get_class() {
            return il2cpp::get_class<app::AnalogueInputData__Class>(type_info(), "", "AnalogueInputData");
        }
        inline app::AnalogueInputData* create() {
            return il2cpp::create_object<app::AnalogueInputData>(get_class());
        }
    } // namespace AnalogueInputData
} // namespace app::classes::types
