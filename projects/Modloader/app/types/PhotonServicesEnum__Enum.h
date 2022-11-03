#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace PhotonServicesEnum__Enum {
        namespace {
            inline app::PhotonServicesEnum__Enum__Class* type_info_ref = nullptr;
        }
        inline app::PhotonServicesEnum__Enum__Class** type_info = &type_info_ref;
        inline app::PhotonServicesEnum__Enum__Class* get_class() {
            return il2cpp::get_class<app::PhotonServicesEnum__Enum__Class>(type_info, "PlayFab.PlayStreamModels", "PhotonServicesEnum");
        }
        inline app::PhotonServicesEnum__Enum* create() {
            return il2cpp::create_object<app::PhotonServicesEnum__Enum>(get_class());
        }
    } // namespace PhotonServicesEnum__Enum
} // namespace app::classes::types
