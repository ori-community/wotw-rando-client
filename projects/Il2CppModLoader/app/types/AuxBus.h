#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace AuxBus {
        namespace {
            app::AuxBus__Class* type_info_ref = nullptr;
        }
        app::AuxBus__Class** type_info = &type_info_ref;
        inline app::AuxBus__Class* get_class() {
            return il2cpp::get_class<app::AuxBus__Class>(type_info, "AK.Wwise", "AuxBus");
        }
        inline app::AuxBus* create() {
            return il2cpp::create_object<app::AuxBus>(get_class());
        }
    } // namespace AuxBus
} // namespace app::classes::types
