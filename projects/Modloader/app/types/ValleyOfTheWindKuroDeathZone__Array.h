#pragma once
#include <Modloader/app/structs/ValleyOfTheWindKuroDeathZone__Array.h>
#include <Modloader/app/structs/ValleyOfTheWindKuroDeathZone__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ValleyOfTheWindKuroDeathZone__Array {
        inline app::ValleyOfTheWindKuroDeathZone__Array__Class** type_info() {
            static app::ValleyOfTheWindKuroDeathZone__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::ValleyOfTheWindKuroDeathZone__Array__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::ValleyOfTheWindKuroDeathZone__Array__Class* get_class() {
            return il2cpp::get_class<app::ValleyOfTheWindKuroDeathZone__Array__Class>(type_info(), "", "ValleyOfTheWindKuroDeathZone[]");
        }
        inline app::ValleyOfTheWindKuroDeathZone__Array* create() {
            return il2cpp::create_object<app::ValleyOfTheWindKuroDeathZone__Array>(get_class());
        }
    } // namespace ValleyOfTheWindKuroDeathZone__Array
} // namespace app::classes::types
