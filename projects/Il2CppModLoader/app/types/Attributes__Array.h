#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace Attributes__Array {
        namespace {
            inline app::Attributes__Array__Class* type_info_ref = nullptr;
        }
        inline app::Attributes__Array__Class** type_info = &type_info_ref;
        inline app::Attributes__Array__Class* get_class() {
            return il2cpp::get_class<app::Attributes__Array__Class>(type_info, "Microsoft.Applications.Events.DataModels", "Attributes[]");
        }
        inline app::Attributes__Array* create() {
            return il2cpp::create_object<app::Attributes__Array>(get_class());
        }
    } // namespace Attributes__Array
} // namespace app::classes::types
