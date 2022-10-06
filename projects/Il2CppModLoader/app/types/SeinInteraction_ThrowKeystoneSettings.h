#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace SeinInteraction_ThrowKeystoneSettings {
        namespace {
            app::SeinInteraction_ThrowKeystoneSettings__Class* type_info_ref = nullptr;
        }
        app::SeinInteraction_ThrowKeystoneSettings__Class** type_info = &type_info_ref;
        inline app::SeinInteraction_ThrowKeystoneSettings__Class* get_class() {
            return il2cpp::get_nested_class<app::SeinInteraction_ThrowKeystoneSettings__Class>(type_info, "", "SeinInteraction", "ThrowKeystoneSettings");
        }
        inline app::SeinInteraction_ThrowKeystoneSettings* create() {
            return il2cpp::create_object<app::SeinInteraction_ThrowKeystoneSettings>(get_class());
        }
        inline app::SeinInteraction_ThrowKeystoneSettings__Array* create_array(int size) {
            return il2cpp::array_new<app::SeinInteraction_ThrowKeystoneSettings__Array>(get_class(), size);
        }
        inline app::SeinInteraction_ThrowKeystoneSettings__Array* create_array(const std::vector<app::SeinInteraction_ThrowKeystoneSettings*>& items) {
            return il2cpp::array_new<app::SeinInteraction_ThrowKeystoneSettings__Array>(get_class(), items);
        }
    } // namespace SeinInteraction_ThrowKeystoneSettings
} // namespace app::classes::types
