#pragma once
#include <Modloader/app/structs/ITimelineStateRequirementResolverArray.h>
#include <Modloader/app/structs/ITimelineStateRequirementResolverArray__Array.h>
#include <Modloader/app/structs/ITimelineStateRequirementResolverArray__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ITimelineStateRequirementResolverArray {
        inline app::ITimelineStateRequirementResolverArray__Class** type_info() {
            static app::ITimelineStateRequirementResolverArray__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::ITimelineStateRequirementResolverArray__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::ITimelineStateRequirementResolverArray__Class* get_class() {
            return il2cpp::get_class<app::ITimelineStateRequirementResolverArray__Class>(type_info(), "", "ITimelineStateRequirementResolverArray");
        }
        inline app::ITimelineStateRequirementResolverArray__Array* create_array(int size) {
            return il2cpp::array_new<app::ITimelineStateRequirementResolverArray__Array>(get_class(), size);
        }
        inline app::ITimelineStateRequirementResolverArray__Array* create_array(const std::vector<app::ITimelineStateRequirementResolverArray*>& items) {
            return il2cpp::array_new<app::ITimelineStateRequirementResolverArray__Array>(get_class(), items);
        }
    } // namespace ITimelineStateRequirementResolverArray
} // namespace app::classes::types
