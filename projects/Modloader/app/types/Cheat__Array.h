#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace Cheat__Array {
        namespace {
            inline app::Cheat__Array__Class* type_info_ref = nullptr;
        }
        inline app::Cheat__Array__Class** type_info = &type_info_ref;
        inline app::Cheat__Array__Class* get_class() {
            return il2cpp::get_class<app::Cheat__Array__Class>(type_info, "", "Cheat[]");
        }
        inline app::Cheat__Array* create() {
            return il2cpp::create_object<app::Cheat__Array>(get_class());
        }
    } // namespace Cheat__Array
} // namespace app::classes::types
