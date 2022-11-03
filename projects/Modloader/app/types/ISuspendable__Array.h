#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace ISuspendable__Array {
        namespace {
            inline app::ISuspendable__Array__Class* type_info_ref = nullptr;
        }
        inline app::ISuspendable__Array__Class** type_info = &type_info_ref;
        inline app::ISuspendable__Array__Class* get_class() {
            return il2cpp::get_class<app::ISuspendable__Array__Class>(type_info, "Moon", "ISuspendable[]");
        }
        inline app::ISuspendable__Array* create() {
            return il2cpp::create_object<app::ISuspendable__Array>(get_class());
        }
    } // namespace ISuspendable__Array
} // namespace app::classes::types
