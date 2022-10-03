#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace XAttribute__Array {
        namespace {
            app::XAttribute__Array__Class* type_info_ref = nullptr;
        }
        app::XAttribute__Array__Class** type_info = &type_info_ref;
        inline app::XAttribute__Array__Class* get_class() {
            return il2cpp::get_class<app::XAttribute__Array__Class>(type_info, "System.Xml.Linq", "XAttribute[]");
        }
        inline app::XAttribute__Array* create() {
            return il2cpp::create_object<app::XAttribute__Array>(get_class());
        }
    } // namespace XAttribute__Array
} // namespace app::classes::types
