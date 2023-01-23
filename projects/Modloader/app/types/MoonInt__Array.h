#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/MoonInt__Array__Class.h>
#include <Modloader/app/structs/MoonInt__Array.h>

namespace app::classes::types {
    namespace MoonInt__Array {
        namespace {
            inline app::MoonInt__Array__Class* type_info_ref = nullptr;
        }
        inline app::MoonInt__Array__Class** type_info = &type_info_ref;
        inline app::MoonInt__Array__Class* get_class() {
            return il2cpp::get_class<app::MoonInt__Array__Class>(type_info, "Moon", "MoonInt[]");
        }
        inline app::MoonInt__Array* create() {
            return il2cpp::create_object<app::MoonInt__Array>(get_class());
        }
    } // namespace MoonInt__Array
} // namespace app::classes::types
