#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace FrameProfiler {
        extern IL2CPP_MODLOADER_DLLEXPORT app::FrameProfiler__Class** type_info;
        inline app::FrameProfiler__Class* get_class() {
            return il2cpp::get_class<app::FrameProfiler__Class>(type_info, "", "FrameProfiler");
        }
        inline app::FrameProfiler* create() {
            return il2cpp::create_object<app::FrameProfiler>(get_class());
        }
    } // namespace FrameProfiler
} // namespace app::classes::types
