#pragma once
#include <Modloader/app/structs/Timer_2.h>
#include <Modloader/app/structs/Timer_2__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace Timer_2 {
        inline app::Timer_2__Class** type_info() {
            static app::Timer_2__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::Timer_2__Class**)(modloader::win::memory::resolve_rva(0x04760070));
            }
            return cache;
        }
        inline app::Timer_2__Class* get_class() {
            return il2cpp::get_class<app::Timer_2__Class>(type_info(), "", "Timer");
        }
        inline app::Timer_2* create() {
            return il2cpp::create_object<app::Timer_2>(get_class());
        }
    } // namespace Timer_2
} // namespace app::classes::types
