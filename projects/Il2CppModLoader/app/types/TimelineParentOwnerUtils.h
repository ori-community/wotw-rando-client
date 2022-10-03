#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace TimelineParentOwnerUtils {
        extern IL2CPP_MODLOADER_DLLEXPORT app::TimelineParentOwnerUtils__Class** type_info;
        inline app::TimelineParentOwnerUtils__Class* get_class() {
            return il2cpp::get_class<app::TimelineParentOwnerUtils__Class>(type_info, "", "TimelineParentOwnerUtils");
        }
        inline app::TimelineParentOwnerUtils* create() {
            return il2cpp::create_object<app::TimelineParentOwnerUtils>(get_class());
        }
    } // namespace TimelineParentOwnerUtils
} // namespace app::classes::types
