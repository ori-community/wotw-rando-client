#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace ColosseumTimer {
        namespace {
            inline app::ColosseumTimer__Class* type_info_ref = nullptr;
        }
        inline app::ColosseumTimer__Class** type_info = &type_info_ref;
        inline app::ColosseumTimer__Class* get_class() {
            return il2cpp::get_class<app::ColosseumTimer__Class>(type_info, "", "ColosseumTimer");
        }
        inline app::ColosseumTimer* create() {
            return il2cpp::create_object<app::ColosseumTimer>(get_class());
        }
    } // namespace ColosseumTimer
} // namespace app::classes::types
