#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace FileWebRequestCreator {
        extern IL2CPP_MODLOADER_DLLEXPORT app::FileWebRequestCreator__Class** type_info;
        inline app::FileWebRequestCreator__Class* get_class() {
            return il2cpp::get_class<app::FileWebRequestCreator__Class>(type_info, "System.Net", "FileWebRequestCreator");
        }
        inline app::FileWebRequestCreator* create() {
            return il2cpp::create_object<app::FileWebRequestCreator>(get_class());
        }
    } // namespace FileWebRequestCreator
} // namespace app::classes::types
