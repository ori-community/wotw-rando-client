#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace MoonDouble {
        namespace {
            inline app::MoonDouble__Class* type_info_ref = nullptr;
        }
        inline app::MoonDouble__Class** type_info = &type_info_ref;
        inline app::MoonDouble__Class* get_class() {
            return il2cpp::get_class<app::MoonDouble__Class>(type_info, "Moon", "MoonDouble");
        }
        inline app::MoonDouble* create() {
            return il2cpp::create_object<app::MoonDouble>(get_class());
        }
    } // namespace MoonDouble
} // namespace app::classes::types
