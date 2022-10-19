#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace GasballReactions {
        namespace {
            inline app::GasballReactions__Class* type_info_ref = nullptr;
        }
        inline app::GasballReactions__Class** type_info = &type_info_ref;
        inline app::GasballReactions__Class* get_class() {
            return il2cpp::get_class<app::GasballReactions__Class>(type_info, "", "GasballReactions");
        }
        inline app::GasballReactions* create() {
            return il2cpp::create_object<app::GasballReactions>(get_class());
        }
    } // namespace GasballReactions
} // namespace app::classes::types
