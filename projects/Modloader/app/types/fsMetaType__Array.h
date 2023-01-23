#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/fsMetaType__Array__Class.h>
#include <Modloader/app/structs/fsMetaType__Array.h>

namespace app::classes::types {
    namespace fsMetaType__Array {
        namespace {
            inline app::fsMetaType__Array__Class* type_info_ref = nullptr;
        }
        inline app::fsMetaType__Array__Class** type_info = &type_info_ref;
        inline app::fsMetaType__Array__Class* get_class() {
            return il2cpp::get_class<app::fsMetaType__Array__Class>(type_info, "FullSerializer", "fsMetaType[]");
        }
        inline app::fsMetaType__Array* create() {
            return il2cpp::create_object<app::fsMetaType__Array>(get_class());
        }
    } // namespace fsMetaType__Array
} // namespace app::classes::types
