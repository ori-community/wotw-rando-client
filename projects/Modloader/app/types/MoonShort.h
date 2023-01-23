#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/MoonShort__Class.h>
#include <Modloader/app/structs/MoonShort.h>

namespace app::classes::types {
    namespace MoonShort {
        namespace {
            inline app::MoonShort__Class* type_info_ref = nullptr;
        }
        inline app::MoonShort__Class** type_info = &type_info_ref;
        inline app::MoonShort__Class* get_class() {
            return il2cpp::get_class<app::MoonShort__Class>(type_info, "Moon", "MoonShort");
        }
        inline app::MoonShort* create() {
            return il2cpp::create_object<app::MoonShort>(get_class());
        }
    } // namespace MoonShort
} // namespace app::classes::types
