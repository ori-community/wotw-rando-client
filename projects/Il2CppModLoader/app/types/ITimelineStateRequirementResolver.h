#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace ITimelineStateRequirementResolver {
        extern IL2CPP_MODLOADER_DLLEXPORT app::ITimelineStateRequirementResolver__Class** type_info;
        inline app::ITimelineStateRequirementResolver__Class* get_class() {
            return il2cpp::get_class<app::ITimelineStateRequirementResolver__Class>(type_info, "", "ITimelineStateRequirementResolver");
        }
        inline app::ITimelineStateRequirementResolver__Array* create_array(int size) {
            return il2cpp::array_new<app::ITimelineStateRequirementResolver__Array>(get_class(), size);
        }
    } // namespace ITimelineStateRequirementResolver
} // namespace app::classes::types
