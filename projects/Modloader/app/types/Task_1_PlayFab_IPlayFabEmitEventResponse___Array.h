#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/Task_1_PlayFab_IPlayFabEmitEventResponse___Array__Class.h>
#include <Modloader/app/structs/Task_1_PlayFab_IPlayFabEmitEventResponse___Array.h>

namespace app::classes::types {
    namespace Task_1_PlayFab_IPlayFabEmitEventResponse___Array {
        namespace {
            inline app::Task_1_PlayFab_IPlayFabEmitEventResponse___Array__Class* type_info_ref = nullptr;
        }
        inline app::Task_1_PlayFab_IPlayFabEmitEventResponse___Array__Class** type_info = &type_info_ref;
        inline app::Task_1_PlayFab_IPlayFabEmitEventResponse___Array__Class* get_class() {
            return il2cpp::get_class<app::Task_1_PlayFab_IPlayFabEmitEventResponse___Array__Class>(type_info, "System.Threading.Tasks", "Task`1[PlayFab.IPlayFabEmitEventResponse][]");
        }
        inline app::Task_1_PlayFab_IPlayFabEmitEventResponse___Array* create() {
            return il2cpp::create_object<app::Task_1_PlayFab_IPlayFabEmitEventResponse___Array>(get_class());
        }
    } // namespace Task_1_PlayFab_IPlayFabEmitEventResponse___Array
} // namespace app::classes::types
