#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace GuidOwner {
        extern IL2CPP_MODLOADER_DLLEXPORT app::GuidOwner__Class** type_info;
        inline app::GuidOwner__Class* get_class() {
            return il2cpp::get_class<app::GuidOwner__Class>(type_info, "", "GuidOwner");
        }
        inline app::GuidOwner* create() {
            return il2cpp::create_object<app::GuidOwner>(get_class());
        }
    } // namespace GuidOwner
} // namespace app::classes::types
