#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/fsBaseConverter__Array__Class.h>
#include <Modloader/app/structs/fsBaseConverter__Array.h>

namespace app::classes::types {
    namespace fsBaseConverter__Array {
        namespace {
            inline app::fsBaseConverter__Array__Class* type_info_ref = nullptr;
        }
        inline app::fsBaseConverter__Array__Class** type_info = &type_info_ref;
        inline app::fsBaseConverter__Array__Class* get_class() {
            return il2cpp::get_class<app::fsBaseConverter__Array__Class>(type_info, "FullSerializer", "fsBaseConverter[]");
        }
        inline app::fsBaseConverter__Array* create() {
            return il2cpp::create_object<app::fsBaseConverter__Array>(get_class());
        }
    } // namespace fsBaseConverter__Array
} // namespace app::classes::types
