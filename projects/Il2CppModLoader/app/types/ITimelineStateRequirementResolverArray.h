#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace ITimelineStateRequirementResolverArray {
        namespace {
            app::ITimelineStateRequirementResolverArray__Class* type_info_ref = nullptr;
        }
        app::ITimelineStateRequirementResolverArray__Class** type_info = &type_info_ref;
        inline app::ITimelineStateRequirementResolverArray__Class* get_class() {
            return il2cpp::get_class<app::ITimelineStateRequirementResolverArray__Class>(type_info, "", "ITimelineStateRequirementResolverArray");
        }
        inline app::ITimelineStateRequirementResolverArray__Array* create_array(int size) {
            return il2cpp::array_new<app::ITimelineStateRequirementResolverArray__Array>(get_class(), size);
        }
    } // namespace ITimelineStateRequirementResolverArray
} // namespace app::classes::types
