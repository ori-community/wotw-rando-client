#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/GameplayUISystem__Class.h>
#include <Modloader/app/structs/GameplayUISystem.h>

namespace app::classes::types {
    namespace GameplayUISystem {
        namespace {
            inline app::GameplayUISystem__Class* type_info_ref = nullptr;
        }
        inline app::GameplayUISystem__Class** type_info = &type_info_ref;
        inline app::GameplayUISystem__Class* get_class() {
            return il2cpp::get_class<app::GameplayUISystem__Class>(type_info, "Moon.Timeline.Systems", "GameplayUISystem");
        }
        inline app::GameplayUISystem* create() {
            return il2cpp::create_object<app::GameplayUISystem>(get_class());
        }
    } // namespace GameplayUISystem
} // namespace app::classes::types
