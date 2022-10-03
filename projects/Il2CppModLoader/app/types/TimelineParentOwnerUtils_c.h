#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace TimelineParentOwnerUtils_c {
        extern IL2CPP_MODLOADER_DLLEXPORT app::TimelineParentOwnerUtils_c__Class** type_info;
        inline app::TimelineParentOwnerUtils_c__Class* get_class() {
            return il2cpp::get_nested_class<app::TimelineParentOwnerUtils_c__Class>(type_info, "", "TimelineParentOwnerUtils", "<>c");
        }
        inline app::TimelineParentOwnerUtils_c* create() {
            return il2cpp::create_object<app::TimelineParentOwnerUtils_c>(get_class());
        }
    } // namespace TimelineParentOwnerUtils_c
} // namespace app::classes::types
