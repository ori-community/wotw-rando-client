#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace SendMouseEvents_HitInfo__Array {
        extern IL2CPP_MODLOADER_DLLEXPORT app::SendMouseEvents_HitInfo__Array__Class** type_info;
        inline app::SendMouseEvents_HitInfo__Array__Class* get_class() {
            return il2cpp::get_class<app::SendMouseEvents_HitInfo__Array__Class>(type_info, "UnityEngine", "SendMouseEvents+HitInfo[]");
        }
        inline app::SendMouseEvents_HitInfo__Array* create() {
            return il2cpp::create_object<app::SendMouseEvents_HitInfo__Array>(get_class());
        }
    } // namespace SendMouseEvents_HitInfo__Array
} // namespace app::classes::types
