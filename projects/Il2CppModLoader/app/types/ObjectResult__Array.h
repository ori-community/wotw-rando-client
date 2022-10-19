#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace ObjectResult__Array {
        namespace {
            inline app::ObjectResult__Array__Class* type_info_ref = nullptr;
        }
        inline app::ObjectResult__Array__Class** type_info = &type_info_ref;
        inline app::ObjectResult__Array__Class* get_class() {
            return il2cpp::get_class<app::ObjectResult__Array__Class>(type_info, "PlayFab.DataModels", "ObjectResult[]");
        }
        inline app::ObjectResult__Array* create() {
            return il2cpp::create_object<app::ObjectResult__Array>(get_class());
        }
    } // namespace ObjectResult__Array
} // namespace app::classes::types
