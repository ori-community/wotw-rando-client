#pragma once
#include <Modloader/app/structs/GasballSetIsChasingOri.h>
#include <Modloader/app/structs/GasballSetIsChasingOri__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace GasballSetIsChasingOri {
        inline app::GasballSetIsChasingOri__Class** type_info() {
            static app::GasballSetIsChasingOri__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::GasballSetIsChasingOri__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::GasballSetIsChasingOri__Class* get_class() {
            return il2cpp::get_class<app::GasballSetIsChasingOri__Class>(type_info(), "", "GasballSetIsChasingOri");
        }
        inline app::GasballSetIsChasingOri* create() {
            return il2cpp::create_object<app::GasballSetIsChasingOri>(get_class());
        }
    } // namespace GasballSetIsChasingOri
} // namespace app::classes::types
