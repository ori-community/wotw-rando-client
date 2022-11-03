#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace Quest__Array {
        namespace {
            inline app::Quest__Array__Class* type_info_ref = nullptr;
        }
        inline app::Quest__Array__Class** type_info = &type_info_ref;
        inline app::Quest__Array__Class* get_class() {
            return il2cpp::get_class<app::Quest__Array__Class>(type_info, "", "Quest[]");
        }
        inline app::Quest__Array* create() {
            return il2cpp::create_object<app::Quest__Array>(get_class());
        }
    } // namespace Quest__Array
} // namespace app::classes::types
