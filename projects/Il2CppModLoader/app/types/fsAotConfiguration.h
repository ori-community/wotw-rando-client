#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace fsAotConfiguration {
        namespace {
            inline app::fsAotConfiguration__Class* type_info_ref = nullptr;
        }
        inline app::fsAotConfiguration__Class** type_info = &type_info_ref;
        inline app::fsAotConfiguration__Class* get_class() {
            return il2cpp::get_class<app::fsAotConfiguration__Class>(type_info, "FullSerializer", "fsAotConfiguration");
        }
        inline app::fsAotConfiguration* create() {
            return il2cpp::create_object<app::fsAotConfiguration>(get_class());
        }
    } // namespace fsAotConfiguration
} // namespace app::classes::types
