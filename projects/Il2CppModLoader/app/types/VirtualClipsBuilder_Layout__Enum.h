#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace VirtualClipsBuilder_Layout__Enum {
        namespace {
            app::VirtualClipsBuilder_Layout__Enum__Class* type_info_ref = nullptr;
        }
        app::VirtualClipsBuilder_Layout__Enum__Class** type_info = &type_info_ref;
        inline app::VirtualClipsBuilder_Layout__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::VirtualClipsBuilder_Layout__Enum__Class>(type_info, "", "VirtualClipsBuilder", "Layout");
        }
        inline app::VirtualClipsBuilder_Layout__Enum* create() {
            return il2cpp::create_object<app::VirtualClipsBuilder_Layout__Enum>(get_class());
        }
        inline app::VirtualClipsBuilder_Layout__Enum__Array* create_array(int size) {
            return il2cpp::array_new<app::VirtualClipsBuilder_Layout__Enum__Array>(get_class(), size);
        }
        inline app::VirtualClipsBuilder_Layout__Enum__Array* create_array(const std::vector<app::VirtualClipsBuilder_Layout__Enum*>& items) {
            return il2cpp::array_new<app::VirtualClipsBuilder_Layout__Enum__Array>(get_class(), items);
        }
    } // namespace VirtualClipsBuilder_Layout__Enum
} // namespace app::classes::types
