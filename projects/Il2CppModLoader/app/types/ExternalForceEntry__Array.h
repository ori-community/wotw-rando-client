#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace ExternalForceEntry__Array {
        namespace {
            inline app::ExternalForceEntry__Array__Class* type_info_ref = nullptr;
        }
        inline app::ExternalForceEntry__Array__Class** type_info = &type_info_ref;
        inline app::ExternalForceEntry__Array__Class* get_class() {
            return il2cpp::get_class<app::ExternalForceEntry__Array__Class>(type_info, "", "ExternalForceEntry[]");
        }
        inline app::ExternalForceEntry__Array* create() {
            return il2cpp::create_object<app::ExternalForceEntry__Array>(get_class());
        }
    } // namespace ExternalForceEntry__Array
} // namespace app::classes::types
