#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/MoonTypeData__Class.h>
#include <Modloader/app/structs/MoonTypeData.h>
#include <Modloader/app/structs/MoonTypeData__Boxed.h>

namespace app::classes::types {
    namespace MoonTypeData {
        namespace {
            inline app::MoonTypeData__Class* type_info_ref = nullptr;
        }
        inline app::MoonTypeData__Class** type_info = &type_info_ref;
        inline app::MoonTypeData__Class* get_class() {
            return il2cpp::get_class<app::MoonTypeData__Class>(type_info, "Moon", "MoonTypeData");
        }
        inline app::MoonTypeData* create() {
            return il2cpp::create_object<app::MoonTypeData>(get_class());
        }
        inline app::MoonTypeData__Boxed* box(app::MoonTypeData value) {
            return il2cpp::box_value<app::MoonTypeData__Boxed>(get_class(), value);
        }
    } // namespace MoonTypeData
} // namespace app::classes::types
