#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace SequencePlatformB_SequencePlatformOnActivatedSettings {
        namespace {
            inline app::SequencePlatformB_SequencePlatformOnActivatedSettings__Class* type_info_ref = nullptr;
        }
        inline app::SequencePlatformB_SequencePlatformOnActivatedSettings__Class** type_info = &type_info_ref;
        inline app::SequencePlatformB_SequencePlatformOnActivatedSettings__Class* get_class() {
            return il2cpp::get_nested_class<app::SequencePlatformB_SequencePlatformOnActivatedSettings__Class>(type_info, "", "SequencePlatformB", "SequencePlatformOnActivatedSettings");
        }
        inline app::SequencePlatformB_SequencePlatformOnActivatedSettings* create() {
            return il2cpp::create_object<app::SequencePlatformB_SequencePlatformOnActivatedSettings>(get_class());
        }
    } // namespace SequencePlatformB_SequencePlatformOnActivatedSettings
} // namespace app::classes::types
