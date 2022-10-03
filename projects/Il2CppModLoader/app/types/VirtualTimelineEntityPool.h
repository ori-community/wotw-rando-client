#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace VirtualTimelineEntityPool {
        extern IL2CPP_MODLOADER_DLLEXPORT app::VirtualTimelineEntityPool__Class** type_info;
        inline app::VirtualTimelineEntityPool__Class* get_class() {
            return il2cpp::get_class<app::VirtualTimelineEntityPool__Class>(type_info, "Moon.Timeline", "VirtualTimelineEntityPool");
        }
        inline app::VirtualTimelineEntityPool* create() {
            return il2cpp::create_object<app::VirtualTimelineEntityPool>(get_class());
        }
    } // namespace VirtualTimelineEntityPool
} // namespace app::classes::types
