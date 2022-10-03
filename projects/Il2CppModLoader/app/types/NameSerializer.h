#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace NameSerializer {
        namespace {
            app::NameSerializer__Class* type_info_ref = nullptr;
        }
        app::NameSerializer__Class** type_info = &type_info_ref;
        inline app::NameSerializer__Class* get_class() {
            return il2cpp::get_class<app::NameSerializer__Class>(type_info, "System.Xml.Linq", "NameSerializer");
        }
        inline app::NameSerializer* create() {
            return il2cpp::create_object<app::NameSerializer>(get_class());
        }
    } // namespace NameSerializer
} // namespace app::classes::types
