#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace GasballSetIsChasingOri {
        namespace {
            inline app::GasballSetIsChasingOri__Class* type_info_ref = nullptr;
        }
        inline app::GasballSetIsChasingOri__Class** type_info = &type_info_ref;
        inline app::GasballSetIsChasingOri__Class* get_class() {
            return il2cpp::get_class<app::GasballSetIsChasingOri__Class>(type_info, "", "GasballSetIsChasingOri");
        }
        inline app::GasballSetIsChasingOri* create() {
            return il2cpp::create_object<app::GasballSetIsChasingOri>(get_class());
        }
    } // namespace GasballSetIsChasingOri
} // namespace app::classes::types
