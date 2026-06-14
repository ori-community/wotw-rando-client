#pragma once
#include <Modloader/app/structs/TimeZoneInfo.h>
#include <Modloader/app/structs/TimeZoneInfo__Array.h>
#include <Modloader/app/structs/TimeZoneInfo__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace TimeZoneInfo {
        inline app::TimeZoneInfo__Class** type_info() {
            static app::TimeZoneInfo__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::TimeZoneInfo__Class**)(modloader::win::memory::resolve_rva(0x04741EC0));
            }
            return cache;
        }
        inline app::TimeZoneInfo__Class* get_class() {
            return il2cpp::get_class<app::TimeZoneInfo__Class>(type_info(), "System", "TimeZoneInfo");
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
