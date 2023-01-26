#pragma once
#include <Modloader/app/structs/Task_1_PlayFab_IPlayFabEmitEventResponse___Array.h>
#include <Modloader/app/structs/Task_1_PlayFab_IPlayFabEmitEventResponse___Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace Task_1_PlayFab_IPlayFabEmitEventResponse___Array {
        inline app::Task_1_PlayFab_IPlayFabEmitEventResponse___Array__Class** type_info() {
            static app::Task_1_PlayFab_IPlayFabEmitEventResponse___Array__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::Task_1_PlayFab_IPlayFabEmitEventResponse___Array__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::Task_1_PlayFab_IPlayFabEmitEventResponse___Array__Class* get_class() {
            return il2cpp::get_class<app::Task_1_PlayFab_IPlayFabEmitEventResponse___Array__Class>(type_info(), "System.Threading.Tasks", "Task`1[PlayFab.IPlayFabEmitEventResponse][]");
        }
        inline app::Task_1_PlayFab_IPlayFabEmitEventResponse___Array* create() {
            return il2cpp::create_object<app::Task_1_PlayFab_IPlayFabEmitEventResponse___Array>(get_class());
        }
    } // namespace Task_1_PlayFab_IPlayFabEmitEventResponse___Array
} // namespace app::classes::types
