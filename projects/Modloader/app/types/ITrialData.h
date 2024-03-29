#pragma once
#include <Modloader/app/structs/ITrialData.h>
#include <Modloader/app/structs/ITrialData__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ITrialData {
        inline app::ITrialData__Class** type_info() {
            static app::ITrialData__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::ITrialData__Class**)(modloader::win::memory::resolve_rva(0x04727680));
            }
            return cache;
        }
        inline app::ITrialData__Class* get_class() {
            return il2cpp::get_class<app::ITrialData__Class>(type_info(), "Moon.Race", "ITrialData");
        }
    } // namespace ITrialData
} // namespace app::classes::types
