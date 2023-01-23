#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/EarlyZGrid__Class.h>
#include <Modloader/app/structs/EarlyZGrid.h>
#include <Modloader/app/structs/EarlyZGrid__Boxed.h>

namespace app::classes::types {
    namespace EarlyZGrid {
        namespace {
            inline app::EarlyZGrid__Class* type_info_ref = nullptr;
        }
        inline app::EarlyZGrid__Class** type_info = &type_info_ref;
        inline app::EarlyZGrid__Class* get_class() {
            return il2cpp::get_class<app::EarlyZGrid__Class>(type_info, "Moon.Rendering", "EarlyZGrid");
        }
        inline app::EarlyZGrid* create() {
            return il2cpp::create_object<app::EarlyZGrid>(get_class());
        }
        inline app::EarlyZGrid__Boxed* box(app::EarlyZGrid value) {
            return il2cpp::box_value<app::EarlyZGrid__Boxed>(get_class(), value);
        }
    } // namespace EarlyZGrid
} // namespace app::classes::types
