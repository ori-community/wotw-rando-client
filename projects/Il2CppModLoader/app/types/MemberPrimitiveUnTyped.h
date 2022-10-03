#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace MemberPrimitiveUnTyped {
        extern IL2CPP_MODLOADER_DLLEXPORT app::MemberPrimitiveUnTyped__Class** type_info;
        inline app::MemberPrimitiveUnTyped__Class* get_class() {
            return il2cpp::get_class<app::MemberPrimitiveUnTyped__Class>(type_info, "System.Runtime.Serialization.Formatters.Binary", "MemberPrimitiveUnTyped");
        }
        inline app::MemberPrimitiveUnTyped* create() {
            return il2cpp::create_object<app::MemberPrimitiveUnTyped>(get_class());
        }
    } // namespace MemberPrimitiveUnTyped
} // namespace app::classes::types
