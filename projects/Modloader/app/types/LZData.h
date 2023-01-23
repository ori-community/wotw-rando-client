#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/LZData__Class.h>
#include <Modloader/app/structs/LZData.h>
#include <Modloader/app/structs/LZData__Boxed.h>

namespace app::classes::types {
    namespace LZData {
        namespace {
            inline app::LZData__Class* type_info_ref = nullptr;
        }
        inline app::LZData__Class** type_info = &type_info_ref;
        inline app::LZData__Class* get_class() {
            return il2cpp::get_class<app::LZData__Class>(type_info, "Moon.Wwise", "LZData");
        }
        inline app::LZData* create() {
            return il2cpp::create_object<app::LZData>(get_class());
        }
        inline app::LZData__Boxed* box(app::LZData value) {
            return il2cpp::box_value<app::LZData__Boxed>(get_class(), value);
        }
    } // namespace LZData
} // namespace app::classes::types
