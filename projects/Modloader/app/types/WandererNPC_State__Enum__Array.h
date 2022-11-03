#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace WandererNPC_State__Enum__Array {
        namespace {
            inline app::WandererNPC_State__Enum__Array__Class* type_info_ref = nullptr;
        }
        inline app::WandererNPC_State__Enum__Array__Class** type_info = &type_info_ref;
        inline app::WandererNPC_State__Enum__Array__Class* get_class() {
            return il2cpp::get_class<app::WandererNPC_State__Enum__Array__Class>(type_info, "", "WandererNPC+State[]");
        }
        inline app::WandererNPC_State__Enum__Array* create() {
            return il2cpp::create_object<app::WandererNPC_State__Enum__Array>(get_class());
        }
    } // namespace WandererNPC_State__Enum__Array
} // namespace app::classes::types
