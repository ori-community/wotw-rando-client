#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace ITimelineParentOwner__Array {
        namespace {
            app::ITimelineParentOwner__Array__Class* type_info_ref = nullptr;
        }
        app::ITimelineParentOwner__Array__Class** type_info = &type_info_ref;
        inline app::ITimelineParentOwner__Array__Class* get_class() {
            return il2cpp::get_class<app::ITimelineParentOwner__Array__Class>(type_info, "", "ITimelineParentOwner[]");
        }
        inline app::ITimelineParentOwner__Array* create() {
            return il2cpp::create_object<app::ITimelineParentOwner__Array>(get_class());
        }
    } // namespace ITimelineParentOwner__Array
} // namespace app::classes::types
