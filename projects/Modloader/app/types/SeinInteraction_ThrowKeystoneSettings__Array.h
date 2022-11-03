#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace SeinInteraction_ThrowKeystoneSettings__Array {
        namespace {
            inline app::SeinInteraction_ThrowKeystoneSettings__Array__Class* type_info_ref = nullptr;
        }
        inline app::SeinInteraction_ThrowKeystoneSettings__Array__Class** type_info = &type_info_ref;
        inline app::SeinInteraction_ThrowKeystoneSettings__Array__Class* get_class() {
            return il2cpp::get_class<app::SeinInteraction_ThrowKeystoneSettings__Array__Class>(type_info, "", "SeinInteraction+ThrowKeystoneSettings[]");
        }
        inline app::SeinInteraction_ThrowKeystoneSettings__Array* create() {
            return il2cpp::create_object<app::SeinInteraction_ThrowKeystoneSettings__Array>(get_class());
        }
    } // namespace SeinInteraction_ThrowKeystoneSettings__Array
} // namespace app::classes::types
