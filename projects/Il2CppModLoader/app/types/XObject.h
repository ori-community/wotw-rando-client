#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace XObject {
        extern IL2CPP_MODLOADER_DLLEXPORT app::XObject__Class** type_info;
        inline app::XObject__Class* get_class() {
            return il2cpp::get_class<app::XObject__Class>(type_info, "System.Xml.Linq", "XObject");
        }
        inline app::XObject* create() {
            return il2cpp::create_object<app::XObject>(get_class());
        }
    } // namespace XObject
} // namespace app::classes::types
