#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace MoonGuid__Array {
        namespace {
            inline app::MoonGuid__Array__Class* type_info_ref = nullptr;
        }
        inline app::MoonGuid__Array__Class** type_info = &type_info_ref;
        inline app::MoonGuid__Array__Class* get_class() {
            return il2cpp::get_class<app::MoonGuid__Array__Class>(type_info, "", "MoonGuid[]");
        }
        inline app::MoonGuid__Array* create() {
            return il2cpp::create_object<app::MoonGuid__Array>(get_class());
        }
    } // namespace MoonGuid__Array
} // namespace app::classes::types
