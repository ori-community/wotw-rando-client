#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/NoSoulFlameZone__Class.h>
#include <Modloader/app/structs/NoSoulFlameZone.h>
#include <Modloader/app/structs/NoSoulFlameZone__Array.h>

namespace app::classes::types {
    namespace NoSoulFlameZone {
        inline app::NoSoulFlameZone__Class** type_info = (app::NoSoulFlameZone__Class**)(modloader::win::memory::resolve_rva(0x0471FDC0));
        inline app::NoSoulFlameZone__Class* get_class() {
            return il2cpp::get_class<app::NoSoulFlameZone__Class>(type_info, "", "NoSoulFlameZone");
        }
        inline app::NoSoulFlameZone* create() {
            return il2cpp::create_object<app::NoSoulFlameZone>(get_class());
        }
        inline app::NoSoulFlameZone__Array* create_array(int size) {
            return il2cpp::array_new<app::NoSoulFlameZone__Array>(get_class(), size);
        }
        inline app::NoSoulFlameZone__Array* create_array(const std::vector<app::NoSoulFlameZone*>& items) {
            return il2cpp::array_new<app::NoSoulFlameZone__Array>(get_class(), items);
        }
    } // namespace NoSoulFlameZone
} // namespace app::classes::types
