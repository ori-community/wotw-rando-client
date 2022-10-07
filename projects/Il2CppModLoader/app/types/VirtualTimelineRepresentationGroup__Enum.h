#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace VirtualTimelineRepresentationGroup__Enum {
        extern IL2CPP_MODLOADER_DLLEXPORT app::VirtualTimelineRepresentationGroup__Enum__Class** type_info;
        inline app::VirtualTimelineRepresentationGroup__Enum__Class* get_class() {
            return il2cpp::get_class<app::VirtualTimelineRepresentationGroup__Enum__Class>(type_info, "", "VirtualTimelineRepresentationGroup");
        }
        inline app::VirtualTimelineRepresentationGroup__Enum* create() {
            return il2cpp::create_object<app::VirtualTimelineRepresentationGroup__Enum>(get_class());
        }
        inline app::VirtualTimelineRepresentationGroup__Enum__Array* create_array(int size) {
            return il2cpp::array_new<app::VirtualTimelineRepresentationGroup__Enum__Array>(get_class(), size);
        }
        inline app::VirtualTimelineRepresentationGroup__Enum__Array* create_array(const std::vector<app::VirtualTimelineRepresentationGroup__Enum*>& items) {
            return il2cpp::array_new<app::VirtualTimelineRepresentationGroup__Enum__Array>(get_class(), items);
        }
    } // namespace VirtualTimelineRepresentationGroup__Enum
} // namespace app::classes::types
