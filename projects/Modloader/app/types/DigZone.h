#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace DigZone {
        inline app::DigZone__Class** type_info = (app::DigZone__Class**)(modloader::win::memory::resolve_rva(0x04791450));
        inline app::DigZone__Class* get_class() {
            return il2cpp::get_class<app::DigZone__Class>(type_info, "", "DigZone");
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
