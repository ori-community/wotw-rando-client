#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace IgnoreImmediateChanges {
        namespace {
            inline app::IgnoreImmediateChanges__Class* type_info_ref = nullptr;
        }
        inline app::IgnoreImmediateChanges__Class** type_info = &type_info_ref;
        inline app::IgnoreImmediateChanges__Class* get_class() {
            return il2cpp::get_class<app::IgnoreImmediateChanges__Class>(type_info, "", "IgnoreImmediateChanges");
        }
        inline app::IgnoreImmediateChanges* create() {
            return il2cpp::create_object<app::IgnoreImmediateChanges>(get_class());
        }
        inline app::IgnoreImmediateChanges__Boxed* box(app::IgnoreImmediateChanges value) {
            return il2cpp::box_value<app::IgnoreImmediateChanges__Boxed>(get_class(), value);
        }
    } // namespace IgnoreImmediateChanges
} // namespace app::classes::types
