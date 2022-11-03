#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace DataPointIcon {
        namespace {
            inline app::DataPointIcon__Class* type_info_ref = nullptr;
        }
        inline app::DataPointIcon__Class** type_info = &type_info_ref;
        inline app::DataPointIcon__Class* get_class() {
            return il2cpp::get_class<app::DataPointIcon__Class>(type_info, "Moon.Telemetry", "DataPointIcon");
        }
        inline app::DataPointIcon* create() {
            return il2cpp::create_object<app::DataPointIcon>(get_class());
        }
    } // namespace DataPointIcon
} // namespace app::classes::types
