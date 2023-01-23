#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/MoonWater__Class.h>
#include <Modloader/app/structs/MoonWater.h>

namespace app::classes::types {
    namespace MoonWater {
        namespace {
            inline app::MoonWater__Class* type_info_ref = nullptr;
        }
        inline app::MoonWater__Class** type_info = &type_info_ref;
        inline app::MoonWater__Class* get_class() {
            return il2cpp::get_class<app::MoonWater__Class>(type_info, "", "MoonWater");
        }
        inline app::MoonWater* create() {
            return il2cpp::create_object<app::MoonWater>(get_class());
        }
    } // namespace MoonWater
} // namespace app::classes::types
