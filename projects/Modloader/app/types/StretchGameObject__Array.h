#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace StretchGameObject__Array {
        namespace {
            inline app::StretchGameObject__Array__Class* type_info_ref = nullptr;
        }
        inline app::StretchGameObject__Array__Class** type_info = &type_info_ref;
        inline app::StretchGameObject__Array__Class* get_class() {
            return il2cpp::get_class<app::StretchGameObject__Array__Class>(type_info, "", "StretchGameObject[]");
        }
        inline app::StretchGameObject__Array* create() {
            return il2cpp::create_object<app::StretchGameObject__Array>(get_class());
        }
    } // namespace StretchGameObject__Array
} // namespace app::classes::types
