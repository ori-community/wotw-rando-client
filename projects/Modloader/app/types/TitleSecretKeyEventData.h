#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/TitleSecretKeyEventData__Class.h>
#include <Modloader/app/structs/TitleSecretKeyEventData.h>

namespace app::classes::types {
    namespace TitleSecretKeyEventData {
        namespace {
            inline app::TitleSecretKeyEventData__Class* type_info_ref = nullptr;
        }
        inline app::TitleSecretKeyEventData__Class** type_info = &type_info_ref;
        inline app::TitleSecretKeyEventData__Class* get_class() {
            return il2cpp::get_class<app::TitleSecretKeyEventData__Class>(type_info, "PlayFab.PlayStreamModels", "TitleSecretKeyEventData");
        }
        inline app::TitleSecretKeyEventData* create() {
            return il2cpp::create_object<app::TitleSecretKeyEventData>(get_class());
        }
    } // namespace TitleSecretKeyEventData
} // namespace app::classes::types
