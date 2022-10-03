#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace WindPipeZone {
        namespace {
            app::WindPipeZone__Class* type_info_ref = nullptr;
        }
        app::WindPipeZone__Class** type_info = &type_info_ref;
        inline app::WindPipeZone__Class* get_class() {
            return il2cpp::get_class<app::WindPipeZone__Class>(type_info, "", "WindPipeZone");
        }
        inline app::WindPipeZone* create() {
            return il2cpp::create_object<app::WindPipeZone>(get_class());
        }
    } // namespace WindPipeZone
} // namespace app::classes::types
