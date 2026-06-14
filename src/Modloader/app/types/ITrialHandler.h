#pragma once
#include <Modloader/app/structs/ITrialHandler.h>
#include <Modloader/app/structs/ITrialHandler__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ITrialHandler {
        inline app::ITrialHandler__Class** type_info() {
            static app::ITrialHandler__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::ITrialHandler__Class**)(modloader::win::memory::resolve_rva(0x047907D8));
            }
            return cache;
        }
        inline app::ITrialHandler__Class* get_class() {
            return il2cpp::get_class<app::ITrialHandler__Class>(type_info(), "Moon.Race", "ITrialHandler");
        }
    } // namespace ITrialHandler
} // namespace app::classes::types
