#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace BuilderInfo {
        extern IL2CPP_MODLOADER_DLLEXPORT app::BuilderInfo__Class** type_info;
        inline app::BuilderInfo__Class* get_class() {
            return il2cpp::get_class<app::BuilderInfo__Class>(type_info, "", "BuilderInfo");
        }
        inline app::BuilderInfo* create() {
            return il2cpp::create_object<app::BuilderInfo>(get_class());
        }
    } // namespace BuilderInfo
} // namespace app::classes::types
