#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace ElementWriter {
        namespace {
            inline app::ElementWriter__Class* type_info_ref = nullptr;
        }
        inline app::ElementWriter__Class** type_info = &type_info_ref;
        inline app::ElementWriter__Class* get_class() {
            return il2cpp::get_class<app::ElementWriter__Class>(type_info, "System.Xml.Linq", "ElementWriter");
        }
        inline app::ElementWriter* create() {
            return il2cpp::create_object<app::ElementWriter>(get_class());
        }
        inline app::ElementWriter__Boxed* box(app::ElementWriter value) {
            return il2cpp::box_value<app::ElementWriter__Boxed>(get_class(), value);
        }
    } // namespace ElementWriter
} // namespace app::classes::types
