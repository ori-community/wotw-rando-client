#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace ValleyOfTheWindKuroDeathZone__Array {
        namespace {
            inline app::ValleyOfTheWindKuroDeathZone__Array__Class* type_info_ref = nullptr;
        }
        inline app::ValleyOfTheWindKuroDeathZone__Array__Class** type_info = &type_info_ref;
        inline app::ValleyOfTheWindKuroDeathZone__Array__Class* get_class() {
            return il2cpp::get_class<app::ValleyOfTheWindKuroDeathZone__Array__Class>(type_info, "", "ValleyOfTheWindKuroDeathZone[]");
        }
        inline app::ValleyOfTheWindKuroDeathZone__Array* create() {
            return il2cpp::create_object<app::ValleyOfTheWindKuroDeathZone__Array>(get_class());
        }
    } // namespace ValleyOfTheWindKuroDeathZone__Array
} // namespace app::classes::types
