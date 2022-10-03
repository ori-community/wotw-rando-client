#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace SequencePlatformB_SequencePlatformColliderSettings {
        namespace {
            app::SequencePlatformB_SequencePlatformColliderSettings__Class* type_info_ref = nullptr;
        }
        app::SequencePlatformB_SequencePlatformColliderSettings__Class** type_info = &type_info_ref;
        inline app::SequencePlatformB_SequencePlatformColliderSettings__Class* get_class() {
            return il2cpp::get_nested_class<app::SequencePlatformB_SequencePlatformColliderSettings__Class>(type_info, "", "SequencePlatformB", "SequencePlatformColliderSettings");
        }
        inline app::SequencePlatformB_SequencePlatformColliderSettings* create() {
            return il2cpp::create_object<app::SequencePlatformB_SequencePlatformColliderSettings>(get_class());
        }
    } // namespace SequencePlatformB_SequencePlatformColliderSettings
} // namespace app::classes::types
