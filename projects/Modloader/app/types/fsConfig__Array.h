#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/fsConfig__Array__Class.h>
#include <Modloader/app/structs/fsConfig__Array.h>

namespace app::classes::types {
    namespace fsConfig__Array {
        namespace {
            inline app::fsConfig__Array__Class* type_info_ref = nullptr;
        }
        inline app::fsConfig__Array__Class** type_info = &type_info_ref;
        inline app::fsConfig__Array__Class* get_class() {
            return il2cpp::get_class<app::fsConfig__Array__Class>(type_info, "FullSerializer", "fsConfig[]");
        }
        inline app::fsConfig__Array* create() {
            return il2cpp::create_object<app::fsConfig__Array>(get_class());
        }
    } // namespace fsConfig__Array
} // namespace app::classes::types
