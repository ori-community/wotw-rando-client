#pragma once
#include <Modloader/app/structs/ITimelineParentOwner__Array.h>
#include <Modloader/app/structs/ITimelineParentOwner__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ITimelineParentOwner__Array {
        inline app::ITimelineParentOwner__Array__Class** type_info() {
            static app::ITimelineParentOwner__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::ITimelineParentOwner__Array__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::ITimelineParentOwner__Array__Class* get_class() {
            return il2cpp::get_class<app::ITimelineParentOwner__Array__Class>(type_info(), "", "ITimelineParentOwner[]");
        }
        inline app::ITimelineParentOwner__Array* create() {
            return il2cpp::create_object<app::ITimelineParentOwner__Array>(get_class());
        }
    } // namespace ITimelineParentOwner__Array
} // namespace app::classes::types
