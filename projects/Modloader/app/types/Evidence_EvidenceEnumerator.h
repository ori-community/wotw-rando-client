#pragma once
#include <Modloader/app/structs/Evidence_EvidenceEnumerator.h>
#include <Modloader/app/structs/Evidence_EvidenceEnumerator__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace Evidence_EvidenceEnumerator {
        inline app::Evidence_EvidenceEnumerator__Class** type_info() {
            static app::Evidence_EvidenceEnumerator__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::Evidence_EvidenceEnumerator__Class**)(modloader::win::memory::resolve_rva(0x04711BB8));
            }
            return cache;
        }
        inline app::Evidence_EvidenceEnumerator__Class* get_class() {
            return il2cpp::get_nested_class<app::Evidence_EvidenceEnumerator__Class>(type_info(), "System.Security.Policy", "Evidence", "EvidenceEnumerator");
        }
        inline app::Evidence_EvidenceEnumerator* create() {
            return il2cpp::create_object<app::Evidence_EvidenceEnumerator>(get_class());
        }
    } // namespace Evidence_EvidenceEnumerator
} // namespace app::classes::types
