#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/GameInfo__Array__Class.h>
#include <Modloader/app/structs/GameInfo__Array.h>

namespace app::classes::types {
    namespace GameInfo__Array {
        namespace {
            inline app::GameInfo__Array__Class* type_info_ref = nullptr;
        }
        inline app::GameInfo__Array__Class** type_info = &type_info_ref;
        inline app::GameInfo__Array__Class* get_class() {
            return il2cpp::get_class<app::GameInfo__Array__Class>(type_info, "PlayFab.ClientModels", "GameInfo[]");
        }
        inline app::GameInfo__Array* create() {
            return il2cpp::create_object<app::GameInfo__Array>(get_class());
        }
    } // namespace GameInfo__Array
} // namespace app::classes::types
