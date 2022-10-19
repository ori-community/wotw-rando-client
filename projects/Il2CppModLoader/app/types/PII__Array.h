#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace PII__Array {
        namespace {
            inline app::PII__Array__Class* type_info_ref = nullptr;
        }
        inline app::PII__Array__Class** type_info = &type_info_ref;
        inline app::PII__Array__Class* get_class() {
            return il2cpp::get_class<app::PII__Array__Class>(type_info, "Microsoft.Applications.Events.DataModels", "PII[]");
        }
        inline app::PII__Array* create() {
            return il2cpp::create_object<app::PII__Array>(get_class());
        }
    } // namespace PII__Array
} // namespace app::classes::types
