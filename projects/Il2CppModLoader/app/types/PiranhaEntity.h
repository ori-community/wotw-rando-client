#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace PiranhaEntity {
        namespace {
            inline app::PiranhaEntity__Class* type_info_ref = nullptr;
        }
        inline app::PiranhaEntity__Class** type_info = &type_info_ref;
        inline app::PiranhaEntity__Class* get_class() {
            return il2cpp::get_class<app::PiranhaEntity__Class>(type_info, "", "PiranhaEntity");
        }
        inline app::PiranhaEntity* create() {
            return il2cpp::create_object<app::PiranhaEntity>(get_class());
        }
    } // namespace PiranhaEntity
} // namespace app::classes::types
