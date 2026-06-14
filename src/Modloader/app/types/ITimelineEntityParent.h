#pragma once
#include <Modloader/app/structs/ITimelineEntityParent.h>
#include <Modloader/app/structs/ITimelineEntityParent__Array.h>
#include <Modloader/app/structs/ITimelineEntityParent__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ITimelineEntityParent {
        inline app::ITimelineEntityParent__Class** type_info() {
            static app::ITimelineEntityParent__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::ITimelineEntityParent__Class**)(modloader::win::memory::resolve_rva(0x047660F8));
            }
            return cache;
        }
        inline app::ITimelineEntityParent__Class* get_class() {
            return il2cpp::get_class<app::ITimelineEntityParent__Class>(type_info(), "Moon.Timeline", "ITimelineEntityParent");
        }
        inline app::ITimelineEntityParent__Array* create_array(int size) {
            return il2cpp::array_new<app::ITimelineEntityParent__Array>(get_class(), size);
        }
        inline app::ITimelineEntityParent__Array* create_array(const std::vector<app::ITimelineEntityParent*>& items) {
            return il2cpp::array_new<app::ITimelineEntityParent__Array>(get_class(), items);
        }
    } // namespace ITimelineEntityParent
} // namespace app::classes::types
