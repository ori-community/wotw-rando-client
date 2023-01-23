#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/fsData__Array__Class.h>
#include <Modloader/app/structs/fsData__Array.h>

namespace app::classes::types {
    namespace fsData__Array {
        namespace {
            inline app::fsData__Array__Class* type_info_ref = nullptr;
        }
        inline app::fsData__Array__Class** type_info = &type_info_ref;
        inline app::fsData__Array__Class* get_class() {
            return il2cpp::get_class<app::fsData__Array__Class>(type_info, "FullSerializer", "fsData[]");
        }
        inline app::fsData__Array* create() {
            return il2cpp::create_object<app::fsData__Array>(get_class());
        }
    } // namespace fsData__Array
} // namespace app::classes::types
