#pragma once
#include <Modloader/app/structs/UberPoolPerfTest_SettingOverrides.h>
#include <Modloader/app/structs/UberPoolPerfTest_SettingOverrides__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace UberPoolPerfTest_SettingOverrides {
        inline app::UberPoolPerfTest_SettingOverrides__Class** type_info() {
            static app::UberPoolPerfTest_SettingOverrides__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::UberPoolPerfTest_SettingOverrides__Class**)(modloader::win::memory::resolve_rva(0x04721670));
            }
            return cache;
        }
        inline app::UberPoolPerfTest_SettingOverrides__Class* get_class() {
            return il2cpp::get_nested_class<app::UberPoolPerfTest_SettingOverrides__Class>(type_info(), "", "UberPoolPerfTest", "SettingOverrides");
        }
        inline app::UberPoolPerfTest_SettingOverrides* create() {
            return il2cpp::create_object<app::UberPoolPerfTest_SettingOverrides>(get_class());
        }
    } // namespace UberPoolPerfTest_SettingOverrides
} // namespace app::classes::types
