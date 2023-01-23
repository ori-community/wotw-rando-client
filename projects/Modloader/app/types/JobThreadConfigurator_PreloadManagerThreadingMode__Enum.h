#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/JobThreadConfigurator_PreloadManagerThreadingMode__Enum__Class.h>
#include <Modloader/app/structs/JobThreadConfigurator_PreloadManagerThreadingMode__Enum.h>

namespace app::classes::types {
    namespace JobThreadConfigurator_PreloadManagerThreadingMode__Enum {
        namespace {
            inline app::JobThreadConfigurator_PreloadManagerThreadingMode__Enum__Class* type_info_ref = nullptr;
        }
        inline app::JobThreadConfigurator_PreloadManagerThreadingMode__Enum__Class** type_info = &type_info_ref;
        inline app::JobThreadConfigurator_PreloadManagerThreadingMode__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::JobThreadConfigurator_PreloadManagerThreadingMode__Enum__Class>(type_info, "Moon.debugMenu.scripts.gameSpecific.menuItems", "JobThreadConfigurator", "PreloadManagerThreadingMode");
        }
        inline app::JobThreadConfigurator_PreloadManagerThreadingMode__Enum* create() {
            return il2cpp::create_object<app::JobThreadConfigurator_PreloadManagerThreadingMode__Enum>(get_class());
        }
    } // namespace JobThreadConfigurator_PreloadManagerThreadingMode__Enum
} // namespace app::classes::types
