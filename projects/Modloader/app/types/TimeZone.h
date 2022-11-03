#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace TimeZone {
        inline app::TimeZone__Class** type_info = (app::TimeZone__Class**)(modloader::win::memory::resolve_rva(0x04746EC8));
        inline app::TimeZone__Class* get_class() {
            return il2cpp::get_class<app::TimeZone__Class>(type_info, "System", "TimeZone");
        }
        inline app::TimeZone* create() {
            return il2cpp::create_object<app::TimeZone>(get_class());
        }
    } // namespace TimeZone
} // namespace app::classes::types
