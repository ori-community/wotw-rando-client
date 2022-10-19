#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace TimeZoneInfo_AdjustmentRule__Array {
        inline app::TimeZoneInfo_AdjustmentRule__Array__Class** type_info = (app::TimeZoneInfo_AdjustmentRule__Array__Class**)(modloader::win::memory::resolve_rva(0x04754508));
        inline app::TimeZoneInfo_AdjustmentRule__Array__Class* get_class() {
            return il2cpp::get_class<app::TimeZoneInfo_AdjustmentRule__Array__Class>(type_info, "System", "TimeZoneInfo+AdjustmentRule[]");
        }
        inline app::TimeZoneInfo_AdjustmentRule__Array* create() {
            return il2cpp::create_object<app::TimeZoneInfo_AdjustmentRule__Array>(get_class());
        }
    } // namespace TimeZoneInfo_AdjustmentRule__Array
} // namespace app::classes::types
