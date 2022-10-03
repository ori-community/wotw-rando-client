#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace MirroredTimelineSet {
        extern IL2CPP_MODLOADER_DLLEXPORT app::MirroredTimelineSet__Class** type_info;
        inline app::MirroredTimelineSet__Class* get_class() {
            return il2cpp::get_class<app::MirroredTimelineSet__Class>(type_info, "", "MirroredTimelineSet");
        }
        inline app::MirroredTimelineSet* create() {
            return il2cpp::create_object<app::MirroredTimelineSet>(get_class());
        }
    } // namespace MirroredTimelineSet
} // namespace app::classes::types
