#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/FloatZone__Array__Class.h>
#include <Modloader/app/structs/FloatZone__Array.h>

namespace app::classes::types {
    namespace FloatZone__Array {
        namespace {
            inline app::FloatZone__Array__Class* type_info_ref = nullptr;
        }
        inline app::FloatZone__Array__Class** type_info = &type_info_ref;
        inline app::FloatZone__Array__Class* get_class() {
            return il2cpp::get_class<app::FloatZone__Array__Class>(type_info, "", "FloatZone[]");
        }
        inline app::FloatZone__Array* create() {
            return il2cpp::create_object<app::FloatZone__Array>(get_class());
        }
    } // namespace FloatZone__Array
} // namespace app::classes::types
