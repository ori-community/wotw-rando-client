#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace TimeZoneInfo {
        inline app::TimeZoneInfo__Class** type_info = (app::TimeZoneInfo__Class**)(modloader::win::memory::resolve_rva(0x04741EC0));
        inline app::TimeZoneInfo__Class* get_class() {
            return il2cpp::get_class<app::TimeZoneInfo__Class>(type_info, "System", "TimeZoneInfo");
        }
        inline app::TimeZoneInfo* create() {
            return il2cpp::create_object<app::TimeZoneInfo>(get_class());
        }
        inline app::TimeZoneInfo__Array* create_array(int size) {
            return il2cpp::array_new<app::TimeZoneInfo__Array>(get_class(), size);
        }
        inline app::TimeZoneInfo__Array* create_array(const std::vector<app::TimeZoneInfo*>& items) {
            return il2cpp::array_new<app::TimeZoneInfo__Array>(get_class(), items);
        }
    } // namespace TimeZoneInfo
} // namespace app::classes::types
