#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace GasballStayInPlace {
        namespace {
            app::GasballStayInPlace__Class* type_info_ref = nullptr;
        }
        app::GasballStayInPlace__Class** type_info = &type_info_ref;
        inline app::GasballStayInPlace__Class* get_class() {
            return il2cpp::get_class<app::GasballStayInPlace__Class>(type_info, "", "GasballStayInPlace");
        }
        inline app::GasballStayInPlace* create() {
            return il2cpp::create_object<app::GasballStayInPlace>(get_class());
        }
    } // namespace GasballStayInPlace
} // namespace app::classes::types
