#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/BleachBypass__Class.h>
#include <Modloader/app/structs/BleachBypass.h>

namespace app::classes::types {
    namespace BleachBypass {
        namespace {
            inline app::BleachBypass__Class* type_info_ref = nullptr;
        }
        inline app::BleachBypass__Class** type_info = &type_info_ref;
        inline app::BleachBypass__Class* get_class() {
            return il2cpp::get_class<app::BleachBypass__Class>(type_info, "Colorful", "BleachBypass");
        }
        inline app::BleachBypass* create() {
            return il2cpp::create_object<app::BleachBypass>(get_class());
        }
    } // namespace BleachBypass
} // namespace app::classes::types
