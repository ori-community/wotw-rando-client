#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace XAttribute {
        extern IL2CPP_MODLOADER_DLLEXPORT app::XAttribute__Class** type_info;
        inline app::XAttribute__Class* get_class() {
            return il2cpp::get_class<app::XAttribute__Class>(type_info, "System.Xml.Linq", "XAttribute");
        }
        inline app::XAttribute* create() {
            return il2cpp::create_object<app::XAttribute>(get_class());
        }
        inline app::XAttribute__Array* create_array(int size) {
            return il2cpp::array_new<app::XAttribute__Array>(get_class(), size);
        }
    } // namespace XAttribute
} // namespace app::classes::types
