#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace ConfirmOrCancel {
        namespace {
            inline app::ConfirmOrCancel__Class* type_info_ref = nullptr;
        }
        inline app::ConfirmOrCancel__Class** type_info = &type_info_ref;
        inline app::ConfirmOrCancel__Class* get_class() {
            return il2cpp::get_class<app::ConfirmOrCancel__Class>(type_info, "", "ConfirmOrCancel");
        }
        inline app::ConfirmOrCancel* create() {
            return il2cpp::create_object<app::ConfirmOrCancel>(get_class());
        }
    } // namespace ConfirmOrCancel
} // namespace app::classes::types
