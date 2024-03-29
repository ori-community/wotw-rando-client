#pragma once
#include <Modloader/app/structs/Timer.h>
#include <Modloader/app/structs/Timer__Array.h>
#include <Modloader/app/structs/Timer__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace Timer {
        inline app::Timer__Class** type_info() {
            static app::Timer__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::Timer__Class**)(modloader::win::memory::resolve_rva(0x04763360));
            }
            return cache;
        }
        inline app::Timer__Class* get_class() {
            return il2cpp::get_class<app::Timer__Class>(type_info(), "System.Threading", "Timer");
        }
        inline app::Timer* create() {
            return il2cpp::create_object<app::Timer>(get_class());
        }
        inline app::Timer__Array* create_array(int size) {
            return il2cpp::array_new<app::Timer__Array>(get_class(), size);
        }
        inline app::Timer__Array* create_array(const std::vector<app::Timer*>& items) {
            return il2cpp::array_new<app::Timer__Array>(get_class(), items);
        }
    } // namespace Timer
} // namespace app::classes::types
