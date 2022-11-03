#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace RecordEntry__Array {
        namespace {
            inline app::RecordEntry__Array__Class* type_info_ref = nullptr;
        }
        inline app::RecordEntry__Array__Class** type_info = &type_info_ref;
        inline app::RecordEntry__Array__Class* get_class() {
            return il2cpp::get_class<app::RecordEntry__Array__Class>(type_info, "PhysicsDebugTools", "RecordEntry[]");
        }
        inline app::RecordEntry__Array* create() {
            return il2cpp::create_object<app::RecordEntry__Array>(get_class());
        }
    } // namespace RecordEntry__Array
} // namespace app::classes::types
