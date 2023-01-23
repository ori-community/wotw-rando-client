#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/MoonDebugMessage__Array__Class.h>
#include <Modloader/app/structs/MoonDebugMessage__Array.h>

namespace app::classes::types {
    namespace MoonDebugMessage__Array {
        namespace {
            inline app::MoonDebugMessage__Array__Class* type_info_ref = nullptr;
        }
        inline app::MoonDebugMessage__Array__Class** type_info = &type_info_ref;
        inline app::MoonDebugMessage__Array__Class* get_class() {
            return il2cpp::get_class<app::MoonDebugMessage__Array__Class>(type_info, "Moon", "MoonDebugMessage[]");
        }
        inline app::MoonDebugMessage__Array* create() {
            return il2cpp::create_object<app::MoonDebugMessage__Array>(get_class());
        }
    } // namespace MoonDebugMessage__Array
} // namespace app::classes::types
