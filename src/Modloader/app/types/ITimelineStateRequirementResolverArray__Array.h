#pragma once
#include <Modloader/app/structs/ITimelineStateRequirementResolverArray__Array.h>
#include <Modloader/app/structs/ITimelineStateRequirementResolverArray__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ITimelineStateRequirementResolverArray__Array {
        inline app::ITimelineStateRequirementResolverArray__Array__Class** type_info() {
            static app::ITimelineStateRequirementResolverArray__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::ITimelineStateRequirementResolverArray__Array__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::ITimelineStateRequirementResolverArray__Array__Class* get_class() {
            return il2cpp::get_class<app::ITimelineStateRequirementResolverArray__Array__Class>(type_info(), "", "ITimelineStateRequirementResolverArray[]");
        }
        inline app::ITimelineStateRequirementResolverArray__Array* create() {
            return il2cpp::create_object<app::ITimelineStateRequirementResolverArray__Array>(get_class());
        }
    } // namespace ITimelineStateRequirementResolverArray__Array
} // namespace app::classes::types
