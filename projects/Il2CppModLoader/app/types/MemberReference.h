#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace MemberReference {
        extern IL2CPP_MODLOADER_DLLEXPORT app::MemberReference__Class** type_info;
        inline app::MemberReference__Class* get_class() {
            return il2cpp::get_class<app::MemberReference__Class>(type_info, "System.Runtime.Serialization.Formatters.Binary", "MemberReference");
        }
        inline app::MemberReference* create() {
            return il2cpp::create_object<app::MemberReference>(get_class());
        }
    } // namespace MemberReference
} // namespace app::classes::types
