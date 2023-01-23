#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/CC_BleachBypass__Class.h>
#include <Modloader/app/structs/CC_BleachBypass.h>

namespace app::classes::types {
    namespace CC_BleachBypass {
        namespace {
            inline app::CC_BleachBypass__Class* type_info_ref = nullptr;
        }
        inline app::CC_BleachBypass__Class** type_info = &type_info_ref;
        inline app::CC_BleachBypass__Class* get_class() {
            return il2cpp::get_class<app::CC_BleachBypass__Class>(type_info, "", "CC_BleachBypass");
        }
        inline app::CC_BleachBypass* create() {
            return il2cpp::create_object<app::CC_BleachBypass>(get_class());
        }
    } // namespace CC_BleachBypass
} // namespace app::classes::types
