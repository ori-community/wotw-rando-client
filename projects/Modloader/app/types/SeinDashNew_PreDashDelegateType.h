#pragma once
#include <Modloader/app/structs/SeinDashNew_PreDashDelegateType.h>
#include <Modloader/app/structs/SeinDashNew_PreDashDelegateType__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SeinDashNew_PreDashDelegateType {
        inline app::SeinDashNew_PreDashDelegateType__Class** type_info() {
            static app::SeinDashNew_PreDashDelegateType__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::SeinDashNew_PreDashDelegateType__Class**)(modloader::win::memory::resolve_rva(0x04736BE8));
            }
            return cache;
        }
        inline app::SeinDashNew_PreDashDelegateType__Class* get_class() {
            return il2cpp::get_nested_class<app::SeinDashNew_PreDashDelegateType__Class>(type_info(), "", "SeinDashNew", "PreDashDelegateType");
        }
        inline app::SeinDashNew_PreDashDelegateType* create() {
            return il2cpp::create_object<app::SeinDashNew_PreDashDelegateType>(get_class());
        }
    } // namespace SeinDashNew_PreDashDelegateType
} // namespace app::classes::types
