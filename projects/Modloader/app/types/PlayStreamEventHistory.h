#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/PlayStreamEventHistory__Class.h>
#include <Modloader/app/structs/PlayStreamEventHistory.h>

namespace app::classes::types {
    namespace PlayStreamEventHistory {
        namespace {
            inline app::PlayStreamEventHistory__Class* type_info_ref = nullptr;
        }
        inline app::PlayStreamEventHistory__Class** type_info = &type_info_ref;
        inline app::PlayStreamEventHistory__Class* get_class() {
            return il2cpp::get_class<app::PlayStreamEventHistory__Class>(type_info, "PlayFab.PlayStreamModels", "PlayStreamEventHistory");
        }
        inline app::PlayStreamEventHistory* create() {
            return il2cpp::create_object<app::PlayStreamEventHistory>(get_class());
        }
    } // namespace PlayStreamEventHistory
} // namespace app::classes::types
