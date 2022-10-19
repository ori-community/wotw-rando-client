#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace SnapTrapEatCounter {
        namespace {
            inline app::SnapTrapEatCounter__Class* type_info_ref = nullptr;
        }
        inline app::SnapTrapEatCounter__Class** type_info = &type_info_ref;
        inline app::SnapTrapEatCounter__Class* get_class() {
            return il2cpp::get_class<app::SnapTrapEatCounter__Class>(type_info, "", "SnapTrapEatCounter");
        }
        inline app::SnapTrapEatCounter* create() {
            return il2cpp::create_object<app::SnapTrapEatCounter>(get_class());
        }
    } // namespace SnapTrapEatCounter
} // namespace app::classes::types
