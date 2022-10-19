#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace SavePedestal__Array {
        namespace {
            inline app::SavePedestal__Array__Class* type_info_ref = nullptr;
        }
        inline app::SavePedestal__Array__Class** type_info = &type_info_ref;
        inline app::SavePedestal__Array__Class* get_class() {
            return il2cpp::get_class<app::SavePedestal__Array__Class>(type_info, "", "SavePedestal[]");
        }
        inline app::SavePedestal__Array* create() {
            return il2cpp::create_object<app::SavePedestal__Array>(get_class());
        }
    } // namespace SavePedestal__Array
} // namespace app::classes::types
