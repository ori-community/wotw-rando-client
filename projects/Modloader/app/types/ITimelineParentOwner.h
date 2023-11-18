#pragma once
#include <Modloader/app/structs/ITimelineParentOwner.h>
#include <Modloader/app/structs/ITimelineParentOwner__Array.h>
#include <Modloader/app/structs/ITimelineParentOwner__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ITimelineParentOwner {
        inline app::ITimelineParentOwner__Class** type_info() {
            static app::ITimelineParentOwner__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::ITimelineParentOwner__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::ITimelineParentOwner__Class* get_class() {
            return il2cpp::get_class<app::ITimelineParentOwner__Class>(type_info(), "", "ITimelineParentOwner");
        }
        inline app::ITimelineParentOwner__Array* create_array(int size) {
            return il2cpp::array_new<app::ITimelineParentOwner__Array>(get_class(), size);
        }
        inline app::ITimelineParentOwner__Array* create_array(const std::vector<app::ITimelineParentOwner*>& items) {
            return il2cpp::array_new<app::ITimelineParentOwner__Array>(get_class(), items);
        }
    } // namespace ITimelineParentOwner
} // namespace app::classes::types
