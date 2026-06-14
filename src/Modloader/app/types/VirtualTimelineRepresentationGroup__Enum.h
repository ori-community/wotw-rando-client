#pragma once
#include <Modloader/app/structs/VirtualTimelineRepresentationGroup__Enum.h>
#include <Modloader/app/structs/VirtualTimelineRepresentationGroup__Enum__Array.h>
#include <Modloader/app/structs/VirtualTimelineRepresentationGroup__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace VirtualTimelineRepresentationGroup__Enum {
        inline app::VirtualTimelineRepresentationGroup__Enum__Class** type_info() {
            static app::VirtualTimelineRepresentationGroup__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::VirtualTimelineRepresentationGroup__Enum__Class**)(modloader::win::memory::resolve_rva(0x04768478));
            }
            return cache;
        }
        inline app::VirtualTimelineRepresentationGroup__Enum__Class* get_class() {
            return il2cpp::get_class<app::VirtualTimelineRepresentationGroup__Enum__Class>(type_info(), "", "VirtualTimelineRepresentationGroup");
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
