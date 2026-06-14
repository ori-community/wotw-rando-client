#pragma once
#include <Modloader/app/structs/SeinInteraction_ThrowKeystoneSettings__Array.h>
#include <Modloader/app/structs/SeinInteraction_ThrowKeystoneSettings__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SeinInteraction_ThrowKeystoneSettings__Array {
        inline app::SeinInteraction_ThrowKeystoneSettings__Array__Class** type_info() {
            static app::SeinInteraction_ThrowKeystoneSettings__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::SeinInteraction_ThrowKeystoneSettings__Array__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::SeinInteraction_ThrowKeystoneSettings__Array__Class* get_class() {
            return il2cpp::get_class<app::SeinInteraction_ThrowKeystoneSettings__Array__Class>(type_info(), "", "SeinInteraction+ThrowKeystoneSettings[]");
        }
        inline app::SeinInteraction_ThrowKeystoneSettings__Array* create() {
            return il2cpp::create_object<app::SeinInteraction_ThrowKeystoneSettings__Array>(get_class());
        }
    } // namespace SeinInteraction_ThrowKeystoneSettings__Array
} // namespace app::classes::types
