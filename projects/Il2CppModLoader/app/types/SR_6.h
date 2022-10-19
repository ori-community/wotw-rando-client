#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace SR_6 {
        namespace {
            inline app::SR_6__Class* type_info_ref = nullptr;
        }
        inline app::SR_6__Class** type_info = &type_info_ref;
        inline app::SR_6__Class* get_class() {
            return il2cpp::get_class<app::SR_6__Class>(type_info, "Unity.IO.Compression", "SR");
        }
        inline app::SR_6* create() {
            return il2cpp::create_object<app::SR_6>(get_class());
        }
    } // namespace SR_6
} // namespace app::classes::types
