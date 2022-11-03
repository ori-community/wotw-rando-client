#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace SettingsPropertyIsReadOnlyException {
        namespace {
            inline app::SettingsPropertyIsReadOnlyException__Class* type_info_ref = nullptr;
        }
        inline app::SettingsPropertyIsReadOnlyException__Class** type_info = &type_info_ref;
        inline app::SettingsPropertyIsReadOnlyException__Class* get_class() {
            return il2cpp::get_class<app::SettingsPropertyIsReadOnlyException__Class>(type_info, "System.Configuration", "SettingsPropertyIsReadOnlyException");
        }
        inline app::SettingsPropertyIsReadOnlyException* create() {
            return il2cpp::create_object<app::SettingsPropertyIsReadOnlyException>(get_class());
        }
    } // namespace SettingsPropertyIsReadOnlyException
} // namespace app::classes::types
