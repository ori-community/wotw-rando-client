#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/fsConverter__Array__Class.h>
#include <Modloader/app/structs/fsConverter__Array.h>

namespace app::classes::types {
    namespace fsConverter__Array {
        namespace {
            inline app::fsConverter__Array__Class* type_info_ref = nullptr;
        }
        inline app::fsConverter__Array__Class** type_info = &type_info_ref;
        inline app::fsConverter__Array__Class* get_class() {
            return il2cpp::get_class<app::fsConverter__Array__Class>(type_info, "FullSerializer", "fsConverter[]");
        }
        inline app::fsConverter__Array* create() {
            return il2cpp::create_object<app::fsConverter__Array>(get_class());
        }
    } // namespace fsConverter__Array
} // namespace app::classes::types
