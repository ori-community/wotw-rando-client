#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace IVirtualTimelineGameObjectSelfBuild {
        extern IL2CPP_MODLOADER_DLLEXPORT app::IVirtualTimelineGameObjectSelfBuild__Class** type_info;
        inline app::IVirtualTimelineGameObjectSelfBuild__Class* get_class() {
            return il2cpp::get_class<app::IVirtualTimelineGameObjectSelfBuild__Class>(type_info, "", "IVirtualTimelineGameObjectSelfBuild");
        }
        inline app::IVirtualTimelineGameObjectSelfBuild* create() {
            return il2cpp::create_object<app::IVirtualTimelineGameObjectSelfBuild>(get_class());
        }
    } // namespace IVirtualTimelineGameObjectSelfBuild
} // namespace app::classes::types
