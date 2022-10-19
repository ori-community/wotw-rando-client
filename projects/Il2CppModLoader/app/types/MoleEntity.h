#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace MoleEntity {
        namespace {
            inline app::MoleEntity__Class* type_info_ref = nullptr;
        }
        inline app::MoleEntity__Class** type_info = &type_info_ref;
        inline app::MoleEntity__Class* get_class() {
            return il2cpp::get_class<app::MoleEntity__Class>(type_info, "", "MoleEntity");
        }
        inline app::MoleEntity* create() {
            return il2cpp::create_object<app::MoleEntity>(get_class());
        }
    } // namespace MoleEntity
} // namespace app::classes::types
