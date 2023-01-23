#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/ColosseumTimer__Class.h>
#include <Modloader/app/structs/ColosseumTimer.h>

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
