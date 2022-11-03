#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace OriCell__Array {
        namespace {
            inline app::OriCell__Array__Class* type_info_ref = nullptr;
        }
        inline app::OriCell__Array__Class** type_info = &type_info_ref;
        inline app::OriCell__Array__Class* get_class() {
            return il2cpp::get_class<app::OriCell__Array__Class>(type_info, "", "OriCell[]");
        }
        inline app::OriCell__Array* create() {
            return il2cpp::create_object<app::OriCell__Array>(get_class());
        }
    } // namespace OriCell__Array
} // namespace app::classes::types
