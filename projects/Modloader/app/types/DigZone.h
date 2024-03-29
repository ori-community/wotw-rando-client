#pragma once
#include <Modloader/app/structs/DigZone.h>
#include <Modloader/app/structs/DigZone__Array.h>
#include <Modloader/app/structs/DigZone__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace DigZone {
        inline app::DigZone__Class** type_info() {
            static app::DigZone__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::DigZone__Class**)(modloader::win::memory::resolve_rva(0x04791450));
            }
            return cache;
        }
        inline app::DigZone__Class* get_class() {
            return il2cpp::get_class<app::DigZone__Class>(type_info(), "", "DigZone");
        }
        inline app::DigZone* create() {
            return il2cpp::create_object<app::DigZone>(get_class());
        }
        inline app::DigZone__Array* create_array(int size) {
            return il2cpp::array_new<app::DigZone__Array>(get_class(), size);
        }
        inline app::DigZone__Array* create_array(const std::vector<app::DigZone*>& items) {
            return il2cpp::array_new<app::DigZone__Array>(get_class(), items);
        }
    } // namespace DigZone
} // namespace app::classes::types
