#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/MoonIconRenderer_1__Class.h>
#include <Modloader/app/structs/MoonIconRenderer_1.h>

namespace app::classes::types {
    namespace MoonIconRenderer_1 {
        namespace {
            inline app::MoonIconRenderer_1__Class* type_info_ref = nullptr;
        }
        inline app::MoonIconRenderer_1__Class** type_info = &type_info_ref;
        inline app::MoonIconRenderer_1__Class* get_class() {
            return il2cpp::get_class<app::MoonIconRenderer_1__Class>(type_info, "Moon.UI", "MoonIconRenderer");
        }
        inline app::MoonIconRenderer_1* create() {
            return il2cpp::create_object<app::MoonIconRenderer_1>(get_class());
        }
    } // namespace MoonIconRenderer_1
} // namespace app::classes::types
