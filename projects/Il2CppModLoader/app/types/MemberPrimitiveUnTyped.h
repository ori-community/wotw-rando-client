#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace MemberPrimitiveUnTyped {
        inline app::MemberPrimitiveUnTyped__Class** type_info = (app::MemberPrimitiveUnTyped__Class**)(modloader::win::memory::resolve_rva(0x0475CF68));
        inline app::MemberPrimitiveUnTyped__Class* get_class() {
            return il2cpp::get_class<app::MemberPrimitiveUnTyped__Class>(type_info, "System.Runtime.Serialization.Formatters.Binary", "MemberPrimitiveUnTyped");
        }
        inline app::MemberPrimitiveUnTyped* create() {
            return il2cpp::create_object<app::MemberPrimitiveUnTyped>(get_class());
        }
    } // namespace MemberPrimitiveUnTyped
} // namespace app::classes::types
