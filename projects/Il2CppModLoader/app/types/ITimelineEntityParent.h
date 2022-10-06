#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace ITimelineEntityParent {
        extern IL2CPP_MODLOADER_DLLEXPORT app::ITimelineEntityParent__Class** type_info;
        inline app::ITimelineEntityParent__Class* get_class() {
            return il2cpp::get_class<app::ITimelineEntityParent__Class>(type_info, "Moon.Timeline", "ITimelineEntityParent");
        }
        inline app::ITimelineEntityParent__Array* create_array(int size) {
            return il2cpp::array_new<app::ITimelineEntityParent__Array>(get_class(), size);
        }
        inline app::ITimelineEntityParent__Array* create_array(const std::vector<app::ITimelineEntityParent*>& items) {
            return il2cpp::array_new<app::ITimelineEntityParent__Array>(get_class(), items);
        }
    } // namespace ITimelineEntityParent
} // namespace app::classes::types
