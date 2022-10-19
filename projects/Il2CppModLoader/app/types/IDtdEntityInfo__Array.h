#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace IDtdEntityInfo__Array {
        namespace {
            inline app::IDtdEntityInfo__Array__Class* type_info_ref = nullptr;
        }
        inline app::IDtdEntityInfo__Array__Class** type_info = &type_info_ref;
        inline app::IDtdEntityInfo__Array__Class* get_class() {
            return il2cpp::get_class<app::IDtdEntityInfo__Array__Class>(type_info, "System.Xml", "IDtdEntityInfo[]");
        }
        inline app::IDtdEntityInfo__Array* create() {
            return il2cpp::create_object<app::IDtdEntityInfo__Array>(get_class());
        }
    } // namespace IDtdEntityInfo__Array
} // namespace app::classes::types
