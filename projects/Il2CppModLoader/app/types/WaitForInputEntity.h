#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace WaitForInputEntity {
        namespace {
            inline app::WaitForInputEntity__Class* type_info_ref = nullptr;
        }
        inline app::WaitForInputEntity__Class** type_info = &type_info_ref;
        inline app::WaitForInputEntity__Class* get_class() {
            return il2cpp::get_class<app::WaitForInputEntity__Class>(type_info, "Moon.Timeline", "WaitForInputEntity");
        }
        inline app::WaitForInputEntity* create() {
            return il2cpp::create_object<app::WaitForInputEntity>(get_class());
        }
    } // namespace WaitForInputEntity
} // namespace app::classes::types
