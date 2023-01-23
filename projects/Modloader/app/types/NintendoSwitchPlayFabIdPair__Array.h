#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/NintendoSwitchPlayFabIdPair__Array__Class.h>
#include <Modloader/app/structs/NintendoSwitchPlayFabIdPair__Array.h>

namespace app::classes::types {
    namespace NintendoSwitchPlayFabIdPair__Array {
        namespace {
            inline app::NintendoSwitchPlayFabIdPair__Array__Class* type_info_ref = nullptr;
        }
        inline app::NintendoSwitchPlayFabIdPair__Array__Class** type_info = &type_info_ref;
        inline app::NintendoSwitchPlayFabIdPair__Array__Class* get_class() {
            return il2cpp::get_class<app::NintendoSwitchPlayFabIdPair__Array__Class>(type_info, "PlayFab.ClientModels", "NintendoSwitchPlayFabIdPair[]");
        }
        inline app::NintendoSwitchPlayFabIdPair__Array* create() {
            return il2cpp::create_object<app::NintendoSwitchPlayFabIdPair__Array>(get_class());
        }
    } // namespace NintendoSwitchPlayFabIdPair__Array
} // namespace app::classes::types
