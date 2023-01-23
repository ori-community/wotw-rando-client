#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/MoonSwarmer__Array__Class.h>
#include <Modloader/app/structs/MoonSwarmer__Array.h>

namespace app::classes::types {
    namespace MoonSwarmer__Array {
        namespace {
            inline app::MoonSwarmer__Array__Class* type_info_ref = nullptr;
        }
        inline app::MoonSwarmer__Array__Class** type_info = &type_info_ref;
        inline app::MoonSwarmer__Array__Class* get_class() {
            return il2cpp::get_class<app::MoonSwarmer__Array__Class>(type_info, "", "MoonSwarmer[]");
        }
        inline app::MoonSwarmer__Array* create() {
            return il2cpp::create_object<app::MoonSwarmer__Array>(get_class());
        }
    } // namespace MoonSwarmer__Array
} // namespace app::classes::types
