#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace DoubleLinkAxis {
        extern IL2CPP_MODLOADER_DLLEXPORT app::DoubleLinkAxis__Class** type_info;
        inline app::DoubleLinkAxis__Class* get_class() {
            return il2cpp::get_class<app::DoubleLinkAxis__Class>(type_info, "System.Xml.Schema", "DoubleLinkAxis");
        }
        inline app::DoubleLinkAxis* create() {
            return il2cpp::create_object<app::DoubleLinkAxis>(get_class());
        }
    } // namespace DoubleLinkAxis
} // namespace app::classes::types
