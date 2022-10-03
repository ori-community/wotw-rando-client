#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace Datatype_untypedAtomicType {
        extern IL2CPP_MODLOADER_DLLEXPORT app::Datatype_untypedAtomicType__Class** type_info;
        inline app::Datatype_untypedAtomicType__Class* get_class() {
            return il2cpp::get_class<app::Datatype_untypedAtomicType__Class>(type_info, "System.Xml.Schema", "Datatype_untypedAtomicType");
        }
        inline app::Datatype_untypedAtomicType* create() {
            return il2cpp::create_object<app::Datatype_untypedAtomicType>(get_class());
        }
    } // namespace Datatype_untypedAtomicType
} // namespace app::classes::types
