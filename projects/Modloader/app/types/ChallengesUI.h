#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace ChallengesUI {
        inline app::ChallengesUI__Class** type_info = (app::ChallengesUI__Class**)(modloader::win::memory::resolve_rva(0x04739130));
        inline app::ChallengesUI__Class* get_class() {
            return il2cpp::get_class<app::ChallengesUI__Class>(type_info, "", "ChallengesUI");
        }
        inline app::ChallengesUI* create() {
            return il2cpp::create_object<app::ChallengesUI>(get_class());
        }
    } // namespace ChallengesUI
} // namespace app::classes::types
