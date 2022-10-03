#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace Datatype_dateTimeBase {
        extern IL2CPP_MODLOADER_DLLEXPORT app::Datatype_dateTimeBase__Class** type_info;
        inline app::Datatype_dateTimeBase__Class* get_class() {
            return il2cpp::get_class<app::Datatype_dateTimeBase__Class>(type_info, "System.Xml.Schema", "Datatype_dateTimeBase");
        }
        inline app::Datatype_dateTimeBase* create() {
            return il2cpp::create_object<app::Datatype_dateTimeBase>(get_class());
        }
    } // namespace Datatype_dateTimeBase
} // namespace app::classes::types
