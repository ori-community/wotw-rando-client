#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace ITimelineEntityParent {
        inline app::ITimelineEntityParent__Class** type_info = (app::ITimelineEntityParent__Class**)(modloader::win::memory::resolve_rva(0x047660F8));
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
