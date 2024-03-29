#pragma once
#include <Modloader/app/structs/SeinInteraction_ThrowKeystoneSettings.h>
#include <Modloader/app/structs/SeinInteraction_ThrowKeystoneSettings__Array.h>
#include <Modloader/app/structs/SeinInteraction_ThrowKeystoneSettings__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SeinInteraction_ThrowKeystoneSettings {
        inline app::SeinInteraction_ThrowKeystoneSettings__Class** type_info() {
            static app::SeinInteraction_ThrowKeystoneSettings__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::SeinInteraction_ThrowKeystoneSettings__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::SeinInteraction_ThrowKeystoneSettings__Class* get_class() {
            return il2cpp::get_nested_class<app::SeinInteraction_ThrowKeystoneSettings__Class>(type_info(), "", "SeinInteraction", "ThrowKeystoneSettings");
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
