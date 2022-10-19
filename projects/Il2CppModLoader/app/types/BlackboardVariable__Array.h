#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace BlackboardVariable__Array {
        namespace {
            inline app::BlackboardVariable__Array__Class* type_info_ref = nullptr;
        }
        inline app::BlackboardVariable__Array__Class** type_info = &type_info_ref;
        inline app::BlackboardVariable__Array__Class* get_class() {
            return il2cpp::get_class<app::BlackboardVariable__Array__Class>(type_info, "Moon.BehaviourSystem", "BlackboardVariable[]");
        }
        inline app::BlackboardVariable__Array* create() {
            return il2cpp::create_object<app::BlackboardVariable__Array>(get_class());
        }
    } // namespace BlackboardVariable__Array
} // namespace app::classes::types
