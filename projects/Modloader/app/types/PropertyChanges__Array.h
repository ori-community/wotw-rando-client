#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace PropertyChanges__Array {
        namespace {
            inline app::PropertyChanges__Array__Class* type_info_ref = nullptr;
        }
        inline app::PropertyChanges__Array__Class** type_info = &type_info_ref;
        inline app::PropertyChanges__Array__Class* get_class() {
            return il2cpp::get_class<app::PropertyChanges__Array__Class>(type_info, "Moon.ReviewFramework", "PropertyChanges[]");
        }
        inline app::PropertyChanges__Array* create() {
            return il2cpp::create_object<app::PropertyChanges__Array>(get_class());
        }
    } // namespace PropertyChanges__Array
} // namespace app::classes::types
