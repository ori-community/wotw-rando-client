#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace Utc__Array {
        namespace {
            inline app::Utc__Array__Class* type_info_ref = nullptr;
        }
        inline app::Utc__Array__Class** type_info = &type_info_ref;
        inline app::Utc__Array__Class* get_class() {
            return il2cpp::get_class<app::Utc__Array__Class>(type_info, "Microsoft.Applications.Events.DataModels", "Utc[]");
        }
        inline app::Utc__Array* create() {
            return il2cpp::create_object<app::Utc__Array>(get_class());
        }
    } // namespace Utc__Array
} // namespace app::classes::types
