#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/ICageMetaData__Array__Class.h>
#include <Modloader/app/structs/ICageMetaData__Array.h>

namespace app::classes::types {
    namespace ICageMetaData__Array {
        namespace {
            inline app::ICageMetaData__Array__Class* type_info_ref = nullptr;
        }
        inline app::ICageMetaData__Array__Class** type_info = &type_info_ref;
        inline app::ICageMetaData__Array__Class* get_class() {
            return il2cpp::get_class<app::ICageMetaData__Array__Class>(type_info, "", "ICageMetaData[]");
        }
        inline app::ICageMetaData__Array* create() {
            return il2cpp::create_object<app::ICageMetaData__Array>(get_class());
        }
    } // namespace ICageMetaData__Array
} // namespace app::classes::types
