#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/AkEmitterSettings__Class.h>
#include <Modloader/app/structs/AkEmitterSettings.h>

namespace app::classes::types {
    namespace AkEmitterSettings {
        namespace {
            inline app::AkEmitterSettings__Class* type_info_ref = nullptr;
        }
        inline app::AkEmitterSettings__Class** type_info = &type_info_ref;
        inline app::AkEmitterSettings__Class* get_class() {
            return il2cpp::get_class<app::AkEmitterSettings__Class>(type_info, "", "AkEmitterSettings");
        }
        inline app::AkEmitterSettings* create() {
            return il2cpp::create_object<app::AkEmitterSettings>(get_class());
        }
    } // namespace AkEmitterSettings
} // namespace app::classes::types
