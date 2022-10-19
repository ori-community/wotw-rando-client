#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace InteriorNode__Array {
        namespace {
            inline app::InteriorNode__Array__Class* type_info_ref = nullptr;
        }
        inline app::InteriorNode__Array__Class** type_info = &type_info_ref;
        inline app::InteriorNode__Array__Class* get_class() {
            return il2cpp::get_class<app::InteriorNode__Array__Class>(type_info, "System.Xml.Schema", "InteriorNode[]");
        }
        inline app::InteriorNode__Array* create() {
            return il2cpp::create_object<app::InteriorNode__Array>(get_class());
        }
    } // namespace InteriorNode__Array
} // namespace app::classes::types
