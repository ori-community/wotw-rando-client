#pragma once
#include <Modloader/app/structs/KuDash_PreDashDelegateType.h>
#include <Modloader/app/structs/KuDash_PreDashDelegateType__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace KuDash_PreDashDelegateType {
        inline app::KuDash_PreDashDelegateType__Class** type_info() {
            static app::KuDash_PreDashDelegateType__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::KuDash_PreDashDelegateType__Class**)(modloader::win::memory::resolve_rva(0x04730278));
            }
            return cache;
        }
        inline app::KuDash_PreDashDelegateType__Class* get_class() {
            return il2cpp::get_nested_class<app::KuDash_PreDashDelegateType__Class>(type_info(), "", "KuDash", "PreDashDelegateType");
        }
        inline app::KuDash_PreDashDelegateType* create() {
            return il2cpp::create_object<app::KuDash_PreDashDelegateType>(get_class());
        }
    } // namespace KuDash_PreDashDelegateType
} // namespace app::classes::types
