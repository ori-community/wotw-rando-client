#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace RecorderFrame__Array {
        namespace {
            inline app::RecorderFrame__Array__Class* type_info_ref = nullptr;
        }
        inline app::RecorderFrame__Array__Class** type_info = &type_info_ref;
        inline app::RecorderFrame__Array__Class* get_class() {
            return il2cpp::get_class<app::RecorderFrame__Array__Class>(type_info, "", "RecorderFrame[]");
        }
        inline app::RecorderFrame__Array* create() {
            return il2cpp::create_object<app::RecorderFrame__Array>(get_class());
        }
    } // namespace RecorderFrame__Array
} // namespace app::classes::types
