#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace ServerAnimatorHelper_SequenceEntryData__Array {
        extern IL2CPP_MODLOADER_DLLEXPORT app::ServerAnimatorHelper_SequenceEntryData__Array__Class** type_info;
        inline app::ServerAnimatorHelper_SequenceEntryData__Array__Class* get_class() {
            return il2cpp::get_class<app::ServerAnimatorHelper_SequenceEntryData__Array__Class>(type_info, "", "ServerAnimatorHelper+SequenceEntryData[]");
        }
        inline app::ServerAnimatorHelper_SequenceEntryData__Array* create() {
            return il2cpp::create_object<app::ServerAnimatorHelper_SequenceEntryData__Array>(get_class());
        }
    } // namespace ServerAnimatorHelper_SequenceEntryData__Array
} // namespace app::classes::types
