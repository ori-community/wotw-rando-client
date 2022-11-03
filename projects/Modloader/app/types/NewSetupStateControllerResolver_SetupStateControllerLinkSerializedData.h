#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace NewSetupStateControllerResolver_SetupStateControllerLinkSerializedData {
        namespace {
            inline app::NewSetupStateControllerResolver_SetupStateControllerLinkSerializedData__Class* type_info_ref = nullptr;
        }
        inline app::NewSetupStateControllerResolver_SetupStateControllerLinkSerializedData__Class** type_info = &type_info_ref;
        inline app::NewSetupStateControllerResolver_SetupStateControllerLinkSerializedData__Class* get_class() {
            return il2cpp::get_nested_class<app::NewSetupStateControllerResolver_SetupStateControllerLinkSerializedData__Class>(type_info, "Moon", "NewSetupStateControllerResolver", "SetupStateControllerLinkSerializedData");
        }
        inline app::NewSetupStateControllerResolver_SetupStateControllerLinkSerializedData* create() {
            return il2cpp::create_object<app::NewSetupStateControllerResolver_SetupStateControllerLinkSerializedData>(get_class());
        }
    } // namespace NewSetupStateControllerResolver_SetupStateControllerLinkSerializedData
} // namespace app::classes::types
