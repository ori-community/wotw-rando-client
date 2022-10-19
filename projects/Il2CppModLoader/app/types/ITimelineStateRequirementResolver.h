#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace ITimelineStateRequirementResolver {
        inline app::ITimelineStateRequirementResolver__Class** type_info = (app::ITimelineStateRequirementResolver__Class**)(modloader::win::memory::resolve_rva(0x04770D78));
        inline app::ITimelineStateRequirementResolver__Class* get_class() {
            return il2cpp::get_class<app::ITimelineStateRequirementResolver__Class>(type_info, "", "ITimelineStateRequirementResolver");
        }
        inline app::ITimelineStateRequirementResolver__Array* create_array(int size) {
            return il2cpp::array_new<app::ITimelineStateRequirementResolver__Array>(get_class(), size);
        }
        inline app::ITimelineStateRequirementResolver__Array* create_array(const std::vector<app::ITimelineStateRequirementResolver*>& items) {
            return il2cpp::array_new<app::ITimelineStateRequirementResolver__Array>(get_class(), items);
        }
    } // namespace ITimelineStateRequirementResolver
} // namespace app::classes::types
