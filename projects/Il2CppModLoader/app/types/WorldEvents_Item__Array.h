#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace WorldEvents_Item__Array {
        namespace {
            inline app::WorldEvents_Item__Array__Class* type_info_ref = nullptr;
        }
        inline app::WorldEvents_Item__Array__Class** type_info = &type_info_ref;
        inline app::WorldEvents_Item__Array__Class* get_class() {
            return il2cpp::get_class<app::WorldEvents_Item__Array__Class>(type_info, "", "WorldEvents+Item[]");
        }
        inline app::WorldEvents_Item__Array* create() {
            return il2cpp::create_object<app::WorldEvents_Item__Array>(get_class());
        }
    } // namespace WorldEvents_Item__Array
} // namespace app::classes::types
