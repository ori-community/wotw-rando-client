#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/LegacyLever__Class.h>
#include <Modloader/app/structs/LegacyLever.h>

namespace app::classes::types {
    namespace LegacyLever {
        namespace {
            inline app::LegacyLever__Class* type_info_ref = nullptr;
        }
        inline app::LegacyLever__Class** type_info = &type_info_ref;
        inline app::LegacyLever__Class* get_class() {
            return il2cpp::get_class<app::LegacyLever__Class>(type_info, "", "LegacyLever");
        }
        inline app::LegacyLever* create() {
            return il2cpp::create_object<app::LegacyLever>(get_class());
        }
    } // namespace LegacyLever
} // namespace app::classes::types
