#pragma once
#include <Modloader/app/structs/SetupStateModifierData.h>
#include <Modloader/app/structs/SetupStateModifierData__Array.h>
#include <Modloader/app/structs/SetupStateModifierData__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SetupStateModifierData {
        inline app::SetupStateModifierData__Class** type_info() {
            static app::SetupStateModifierData__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::SetupStateModifierData__Class**)(modloader::win::memory::resolve_rva(0x04720E38));
            }
            return cache;
        }
        inline app::SetupStateModifierData__Class* get_class() {
            return il2cpp::get_class<app::SetupStateModifierData__Class>(type_info(), "", "SetupStateModifierData");
        }
        inline app::SetupStateModifierData* create() {
            return il2cpp::create_object<app::SetupStateModifierData>(get_class());
        }
        inline app::SetupStateModifierData__Array* create_array(int size) {
            return il2cpp::array_new<app::SetupStateModifierData__Array>(get_class(), size);
        }
        inline app::SetupStateModifierData__Array* create_array(const std::vector<app::SetupStateModifierData*>& items) {
            return il2cpp::array_new<app::SetupStateModifierData__Array>(get_class(), items);
        }
    } // namespace SetupStateModifierData
} // namespace app::classes::types
