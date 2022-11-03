#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace NightBerry {
        namespace {
            inline app::NightBerry__Class* type_info_ref = nullptr;
        }
        inline app::NightBerry__Class** type_info = &type_info_ref;
        inline app::NightBerry__Class* get_class() {
            return il2cpp::get_class<app::NightBerry__Class>(type_info, "", "NightBerry");
        }
        inline app::NightBerry* create() {
            return il2cpp::create_object<app::NightBerry>(get_class());
        }
    } // namespace NightBerry
} // namespace app::classes::types
