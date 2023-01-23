#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/UberPoolPerfTest_SettingOverrides__Class.h>
#include <Modloader/app/structs/UberPoolPerfTest_SettingOverrides.h>

namespace app::classes::types {
    namespace UberPoolPerfTest_SettingOverrides {
        inline app::UberPoolPerfTest_SettingOverrides__Class** type_info = (app::UberPoolPerfTest_SettingOverrides__Class**)(modloader::win::memory::resolve_rva(0x04721670));
        inline app::UberPoolPerfTest_SettingOverrides__Class* get_class() {
            return il2cpp::get_nested_class<app::UberPoolPerfTest_SettingOverrides__Class>(type_info, "", "UberPoolPerfTest", "SettingOverrides");
        }
        inline app::UberPoolPerfTest_SettingOverrides* create() {
            return il2cpp::create_object<app::UberPoolPerfTest_SettingOverrides>(get_class());
        }
    } // namespace UberPoolPerfTest_SettingOverrides
} // namespace app::classes::types
