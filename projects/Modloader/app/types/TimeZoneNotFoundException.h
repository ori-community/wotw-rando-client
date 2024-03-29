#pragma once
#include <Modloader/app/structs/TimeZoneNotFoundException.h>
#include <Modloader/app/structs/TimeZoneNotFoundException__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace TimeZoneNotFoundException {
        inline app::TimeZoneNotFoundException__Class** type_info() {
            static app::TimeZoneNotFoundException__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::TimeZoneNotFoundException__Class**)(modloader::win::memory::resolve_rva(0x0472C3D0));
            }
            return cache;
        }
        inline app::TimeZoneNotFoundException__Class* get_class() {
            return il2cpp::get_class<app::TimeZoneNotFoundException__Class>(type_info(), "System", "TimeZoneNotFoundException");
        }
        inline app::TimeZoneNotFoundException* create() {
            return il2cpp::create_object<app::TimeZoneNotFoundException>(get_class());
        }
    } // namespace TimeZoneNotFoundException
} // namespace app::classes::types
