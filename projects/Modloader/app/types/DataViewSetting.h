#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/DataViewSetting__Class.h>
#include <Modloader/app/structs/DataViewSetting.h>

namespace app::classes::types {
    namespace DataViewSetting {
        inline app::DataViewSetting__Class** type_info = (app::DataViewSetting__Class**)(modloader::win::memory::resolve_rva(0x0474B828));
        inline app::DataViewSetting__Class* get_class() {
            return il2cpp::get_class<app::DataViewSetting__Class>(type_info, "System.Data", "DataViewSetting");
        }
        inline app::DataViewSetting* create() {
            return il2cpp::create_object<app::DataViewSetting>(get_class());
        }
    } // namespace DataViewSetting
} // namespace app::classes::types
