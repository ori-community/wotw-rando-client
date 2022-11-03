#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace UberPoolSettings {
        namespace {
            inline app::UberPoolSettings__Class* type_info_ref = nullptr;
        }
        inline app::UberPoolSettings__Class** type_info = &type_info_ref;
        inline app::UberPoolSettings__Class* get_class() {
            return il2cpp::get_class<app::UberPoolSettings__Class>(type_info, "", "UberPoolSettings");
        }
        inline app::UberPoolSettings* create() {
            return il2cpp::create_object<app::UberPoolSettings>(get_class());
        }
    } // namespace UberPoolSettings
} // namespace app::classes::types
