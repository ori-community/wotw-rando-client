#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace Entry__Array {
        namespace {
            inline app::Entry__Array__Class* type_info_ref = nullptr;
        }
        inline app::Entry__Array__Class** type_info = &type_info_ref;
        inline app::Entry__Array__Class* get_class() {
            return il2cpp::get_class<app::Entry__Array__Class>(type_info, "Moon.Race.Networking", "Entry[]");
        }
        inline app::Entry__Array* create() {
            return il2cpp::create_object<app::Entry__Array>(get_class());
        }
    } // namespace Entry__Array
} // namespace app::classes::types
