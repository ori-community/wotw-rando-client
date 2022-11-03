#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace MoonTypeExtraData {
        namespace {
            inline app::MoonTypeExtraData__Class* type_info_ref = nullptr;
        }
        inline app::MoonTypeExtraData__Class** type_info = &type_info_ref;
        inline app::MoonTypeExtraData__Class* get_class() {
            return il2cpp::get_class<app::MoonTypeExtraData__Class>(type_info, "Moon", "MoonTypeExtraData");
        }
        inline app::MoonTypeExtraData* create() {
            return il2cpp::create_object<app::MoonTypeExtraData>(get_class());
        }
        inline app::MoonTypeExtraData__Boxed* box(app::MoonTypeExtraData value) {
            return il2cpp::box_value<app::MoonTypeExtraData__Boxed>(get_class(), value);
        }
    } // namespace MoonTypeExtraData
} // namespace app::classes::types
