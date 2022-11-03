#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace ValleyOfTheWindKuroDeathZone {
        inline app::ValleyOfTheWindKuroDeathZone__Class** type_info = (app::ValleyOfTheWindKuroDeathZone__Class**)(modloader::win::memory::resolve_rva(0x0474B010));
        inline app::ValleyOfTheWindKuroDeathZone__Class* get_class() {
            return il2cpp::get_class<app::ValleyOfTheWindKuroDeathZone__Class>(type_info, "", "ValleyOfTheWindKuroDeathZone");
        }
        inline app::ValleyOfTheWindKuroDeathZone* create() {
            return il2cpp::create_object<app::ValleyOfTheWindKuroDeathZone>(get_class());
        }
        inline app::ValleyOfTheWindKuroDeathZone__Array* create_array(int size) {
            return il2cpp::array_new<app::ValleyOfTheWindKuroDeathZone__Array>(get_class(), size);
        }
        inline app::ValleyOfTheWindKuroDeathZone__Array* create_array(const std::vector<app::ValleyOfTheWindKuroDeathZone*>& items) {
            return il2cpp::array_new<app::ValleyOfTheWindKuroDeathZone__Array>(get_class(), items);
        }
    } // namespace ValleyOfTheWindKuroDeathZone
} // namespace app::classes::types
