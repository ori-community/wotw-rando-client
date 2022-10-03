#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace VirtualClipsBuilder_Layout__Enum__Array {
        namespace {
            app::VirtualClipsBuilder_Layout__Enum__Array__Class* type_info_ref = nullptr;
        }
        app::VirtualClipsBuilder_Layout__Enum__Array__Class** type_info = &type_info_ref;
        inline app::VirtualClipsBuilder_Layout__Enum__Array__Class* get_class() {
            return il2cpp::get_class<app::VirtualClipsBuilder_Layout__Enum__Array__Class>(type_info, "", "VirtualClipsBuilder+Layout[]");
        }
        inline app::VirtualClipsBuilder_Layout__Enum__Array* create() {
            return il2cpp::create_object<app::VirtualClipsBuilder_Layout__Enum__Array>(get_class());
        }
    } // namespace VirtualClipsBuilder_Layout__Enum__Array
} // namespace app::classes::types
