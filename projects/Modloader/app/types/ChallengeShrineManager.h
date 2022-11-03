#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace ChallengeShrineManager {
        inline app::ChallengeShrineManager__Class** type_info = (app::ChallengeShrineManager__Class**)(modloader::win::memory::resolve_rva(0x047614A8));
        inline app::ChallengeShrineManager__Class* get_class() {
            return il2cpp::get_class<app::ChallengeShrineManager__Class>(type_info, "", "ChallengeShrineManager");
        }
        inline app::ChallengeShrineManager* create() {
            return il2cpp::create_object<app::ChallengeShrineManager>(get_class());
        }
    } // namespace ChallengeShrineManager
} // namespace app::classes::types
