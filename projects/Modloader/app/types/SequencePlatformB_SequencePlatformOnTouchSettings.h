#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/SequencePlatformB_SequencePlatformOnTouchSettings__Class.h>
#include <Modloader/app/structs/SequencePlatformB_SequencePlatformOnTouchSettings.h>

namespace app::classes::types {
    namespace SequencePlatformB_SequencePlatformOnTouchSettings {
        namespace {
            inline app::SequencePlatformB_SequencePlatformOnTouchSettings__Class* type_info_ref = nullptr;
        }
        inline app::SequencePlatformB_SequencePlatformOnTouchSettings__Class** type_info = &type_info_ref;
        inline app::SequencePlatformB_SequencePlatformOnTouchSettings__Class* get_class() {
            return il2cpp::get_nested_class<app::SequencePlatformB_SequencePlatformOnTouchSettings__Class>(type_info, "", "SequencePlatformB", "SequencePlatformOnTouchSettings");
        }
        inline app::SequencePlatformB_SequencePlatformOnTouchSettings* create() {
            return il2cpp::create_object<app::SequencePlatformB_SequencePlatformOnTouchSettings>(get_class());
        }
    } // namespace SequencePlatformB_SequencePlatformOnTouchSettings
} // namespace app::classes::types
