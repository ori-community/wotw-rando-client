#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace Evidence_EvidenceEnumerator {
        extern IL2CPP_MODLOADER_DLLEXPORT app::Evidence_EvidenceEnumerator__Class** type_info;
        inline app::Evidence_EvidenceEnumerator__Class* get_class() {
            return il2cpp::get_nested_class<app::Evidence_EvidenceEnumerator__Class>(type_info, "System.Security.Policy", "Evidence", "EvidenceEnumerator");
        }
        inline app::Evidence_EvidenceEnumerator* create() {
            return il2cpp::create_object<app::Evidence_EvidenceEnumerator>(get_class());
        }
    } // namespace Evidence_EvidenceEnumerator
} // namespace app::classes::types
