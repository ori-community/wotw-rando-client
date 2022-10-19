#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace IRuntimeDynamicDataLink__Array {
        namespace {
            inline app::IRuntimeDynamicDataLink__Array__Class* type_info_ref = nullptr;
        }
        inline app::IRuntimeDynamicDataLink__Array__Class** type_info = &type_info_ref;
        inline app::IRuntimeDynamicDataLink__Array__Class* get_class() {
            return il2cpp::get_class<app::IRuntimeDynamicDataLink__Array__Class>(type_info, "Moon", "IRuntimeDynamicDataLink[]");
        }
        inline app::IRuntimeDynamicDataLink__Array* create() {
            return il2cpp::create_object<app::IRuntimeDynamicDataLink__Array>(get_class());
        }
    } // namespace IRuntimeDynamicDataLink__Array
} // namespace app::classes::types
