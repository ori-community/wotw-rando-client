#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace ITimelineStateRequirementResolverArray__Array {
        namespace {
            app::ITimelineStateRequirementResolverArray__Array__Class* type_info_ref = nullptr;
        }
        app::ITimelineStateRequirementResolverArray__Array__Class** type_info = &type_info_ref;
        inline app::ITimelineStateRequirementResolverArray__Array__Class* get_class() {
            return il2cpp::get_class<app::ITimelineStateRequirementResolverArray__Array__Class>(type_info, "", "ITimelineStateRequirementResolverArray[]");
        }
        inline app::ITimelineStateRequirementResolverArray__Array* create() {
            return il2cpp::create_object<app::ITimelineStateRequirementResolverArray__Array>(get_class());
        }
    } // namespace ITimelineStateRequirementResolverArray__Array
} // namespace app::classes::types
