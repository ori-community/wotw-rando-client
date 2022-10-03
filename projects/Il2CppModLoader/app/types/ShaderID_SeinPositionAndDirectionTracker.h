#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace ShaderID_SeinPositionAndDirectionTracker {
        extern IL2CPP_MODLOADER_DLLEXPORT app::ShaderID_SeinPositionAndDirectionTracker__Class** type_info;
        inline app::ShaderID_SeinPositionAndDirectionTracker__Class* get_class() {
            return il2cpp::get_class<app::ShaderID_SeinPositionAndDirectionTracker__Class>(type_info, "", "ShaderID_SeinPositionAndDirectionTracker");
        }
        inline app::ShaderID_SeinPositionAndDirectionTracker* create() {
            return il2cpp::create_object<app::ShaderID_SeinPositionAndDirectionTracker>(get_class());
        }
    } // namespace ShaderID_SeinPositionAndDirectionTracker
} // namespace app::classes::types
