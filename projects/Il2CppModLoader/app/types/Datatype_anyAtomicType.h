#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace Datatype_anyAtomicType {
        extern IL2CPP_MODLOADER_DLLEXPORT app::Datatype_anyAtomicType__Class** type_info;
        inline app::Datatype_anyAtomicType__Class* get_class() {
            return il2cpp::get_class<app::Datatype_anyAtomicType__Class>(type_info, "System.Xml.Schema", "Datatype_anyAtomicType");
        }
        inline app::Datatype_anyAtomicType* create() {
            return il2cpp::create_object<app::Datatype_anyAtomicType>(get_class());
        }
    } // namespace Datatype_anyAtomicType
} // namespace app::classes::types
