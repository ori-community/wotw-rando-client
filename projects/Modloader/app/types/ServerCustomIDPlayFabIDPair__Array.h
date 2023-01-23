#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/ServerCustomIDPlayFabIDPair__Array__Class.h>
#include <Modloader/app/structs/ServerCustomIDPlayFabIDPair__Array.h>

namespace app::classes::types {
    namespace ServerCustomIDPlayFabIDPair__Array {
        namespace {
            inline app::ServerCustomIDPlayFabIDPair__Array__Class* type_info_ref = nullptr;
        }
        inline app::ServerCustomIDPlayFabIDPair__Array__Class** type_info = &type_info_ref;
        inline app::ServerCustomIDPlayFabIDPair__Array__Class* get_class() {
            return il2cpp::get_class<app::ServerCustomIDPlayFabIDPair__Array__Class>(type_info, "PlayFab.ServerModels", "ServerCustomIDPlayFabIDPair[]");
        }
        inline app::ServerCustomIDPlayFabIDPair__Array* create() {
            return il2cpp::create_object<app::ServerCustomIDPlayFabIDPair__Array>(get_class());
        }
    } // namespace ServerCustomIDPlayFabIDPair__Array
} // namespace app::classes::types
