#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/AreaComment__Array__Class.h>
#include <Modloader/app/structs/AreaComment__Array.h>

namespace app::classes::types {
    namespace AreaComment__Array {
        namespace {
            inline app::AreaComment__Array__Class* type_info_ref = nullptr;
        }
        inline app::AreaComment__Array__Class** type_info = &type_info_ref;
        inline app::AreaComment__Array__Class* get_class() {
            return il2cpp::get_class<app::AreaComment__Array__Class>(type_info, "Moon.Telemetry.Performance", "AreaComment[]");
        }
        inline app::AreaComment__Array* create() {
            return il2cpp::create_object<app::AreaComment__Array>(get_class());
        }
    } // namespace AreaComment__Array
} // namespace app::classes::types
