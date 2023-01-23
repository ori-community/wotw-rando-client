#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/SerializedIntUberState__Array__Class.h>
#include <Modloader/app/structs/SerializedIntUberState__Array.h>

namespace app::classes::types {
    namespace SerializedIntUberState__Array {
        namespace {
            inline app::SerializedIntUberState__Array__Class* type_info_ref = nullptr;
        }
        inline app::SerializedIntUberState__Array__Class** type_info = &type_info_ref;
        inline app::SerializedIntUberState__Array__Class* get_class() {
            return il2cpp::get_class<app::SerializedIntUberState__Array__Class>(type_info, "Moon", "SerializedIntUberState[]");
        }
        inline app::SerializedIntUberState__Array* create() {
            return il2cpp::create_object<app::SerializedIntUberState__Array>(get_class());
        }
    } // namespace SerializedIntUberState__Array
} // namespace app::classes::types
