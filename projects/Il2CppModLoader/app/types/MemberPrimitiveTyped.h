#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace MemberPrimitiveTyped {
        inline app::MemberPrimitiveTyped__Class** type_info = (app::MemberPrimitiveTyped__Class**)(modloader::win::memory::resolve_rva(0x04732180));
        inline app::MemberPrimitiveTyped__Class* get_class() {
            return il2cpp::get_class<app::MemberPrimitiveTyped__Class>(type_info, "System.Runtime.Serialization.Formatters.Binary", "MemberPrimitiveTyped");
        }
        inline app::MemberPrimitiveTyped* create() {
            return il2cpp::create_object<app::MemberPrimitiveTyped>(get_class());
        }
    } // namespace MemberPrimitiveTyped
} // namespace app::classes::types
