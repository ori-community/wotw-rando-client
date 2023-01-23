#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/EZData__Class.h>
#include <Modloader/app/structs/EZData.h>
#include <Modloader/app/structs/EZData__Boxed.h>

namespace app::classes::types {
    namespace EZData {
        namespace {
            inline app::EZData__Class* type_info_ref = nullptr;
        }
        inline app::EZData__Class** type_info = &type_info_ref;
        inline app::EZData__Class* get_class() {
            return il2cpp::get_class<app::EZData__Class>(type_info, "Moon.Wwise", "EZData");
        }
        inline app::EZData* create() {
            return il2cpp::create_object<app::EZData>(get_class());
        }
        inline app::EZData__Boxed* box(app::EZData value) {
            return il2cpp::box_value<app::EZData__Boxed>(get_class(), value);
        }
    } // namespace EZData
} // namespace app::classes::types
