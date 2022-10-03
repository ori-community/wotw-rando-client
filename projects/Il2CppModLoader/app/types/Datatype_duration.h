#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace Datatype_duration {
        extern IL2CPP_MODLOADER_DLLEXPORT app::Datatype_duration__Class** type_info;
        inline app::Datatype_duration__Class* get_class() {
            return il2cpp::get_class<app::Datatype_duration__Class>(type_info, "System.Xml.Schema", "Datatype_duration");
        }
        inline app::Datatype_duration* create() {
            return il2cpp::create_object<app::Datatype_duration>(get_class());
        }
    } // namespace Datatype_duration
} // namespace app::classes::types
