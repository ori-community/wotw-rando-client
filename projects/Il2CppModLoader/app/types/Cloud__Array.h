#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace Cloud__Array {
        namespace {
            inline app::Cloud__Array__Class* type_info_ref = nullptr;
        }
        inline app::Cloud__Array__Class** type_info = &type_info_ref;
        inline app::Cloud__Array__Class* get_class() {
            return il2cpp::get_class<app::Cloud__Array__Class>(type_info, "Microsoft.Applications.Events.DataModels", "Cloud[]");
        }
        inline app::Cloud__Array* create() {
            return il2cpp::create_object<app::Cloud__Array>(get_class());
        }
    } // namespace Cloud__Array
} // namespace app::classes::types
