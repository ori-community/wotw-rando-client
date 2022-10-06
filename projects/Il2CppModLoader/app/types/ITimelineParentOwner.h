#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace ITimelineParentOwner {
        namespace {
            app::ITimelineParentOwner__Class* type_info_ref = nullptr;
        }
        app::ITimelineParentOwner__Class** type_info = &type_info_ref;
        inline app::ITimelineParentOwner__Class* get_class() {
            return il2cpp::get_class<app::ITimelineParentOwner__Class>(type_info, "", "ITimelineParentOwner");
        }
        inline app::ITimelineParentOwner__Array* create_array(int size) {
            return il2cpp::array_new<app::ITimelineParentOwner__Array>(get_class(), size);
        }
        inline app::ITimelineParentOwner__Array* create_array(const std::vector<app::ITimelineParentOwner*>& items) {
            return il2cpp::array_new<app::ITimelineParentOwner__Array>(get_class(), items);
        }
    } // namespace ITimelineParentOwner
} // namespace app::classes::types
