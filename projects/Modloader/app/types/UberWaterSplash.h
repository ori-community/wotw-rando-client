#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace UberWaterSplash {
        namespace {
            inline app::UberWaterSplash__Class* type_info_ref = nullptr;
        }
        inline app::UberWaterSplash__Class** type_info = &type_info_ref;
        inline app::UberWaterSplash__Class* get_class() {
            return il2cpp::get_class<app::UberWaterSplash__Class>(type_info, "", "UberWaterSplash");
        }
        inline app::UberWaterSplash* create() {
            return il2cpp::create_object<app::UberWaterSplash>(get_class());
        }
    } // namespace UberWaterSplash
} // namespace app::classes::types
