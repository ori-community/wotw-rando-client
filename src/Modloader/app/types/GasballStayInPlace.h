#pragma once
#include <Modloader/app/structs/GasballStayInPlace.h>
#include <Modloader/app/structs/GasballStayInPlace__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace GasballStayInPlace {
        inline app::GasballStayInPlace__Class** type_info() {
            static app::GasballStayInPlace__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::GasballStayInPlace__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::GasballStayInPlace__Class* get_class() {
            return il2cpp::get_class<app::GasballStayInPlace__Class>(type_info(), "", "GasballStayInPlace");
        }
        inline app::GasballStayInPlace* create() {
            return il2cpp::create_object<app::GasballStayInPlace>(get_class());
        }
    } // namespace GasballStayInPlace
} // namespace app::classes::types
