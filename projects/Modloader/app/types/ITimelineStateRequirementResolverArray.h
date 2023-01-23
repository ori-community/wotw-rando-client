#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/ITimelineStateRequirementResolverArray__Class.h>
#include <Modloader/app/structs/ITimelineStateRequirementResolverArray__Array.h>
#include <Modloader/app/structs/ITimelineStateRequirementResolverArray.h>

namespace app::classes::types {
    namespace ITimelineStateRequirementResolverArray {
        namespace {
            inline app::ITimelineStateRequirementResolverArray__Class* type_info_ref = nullptr;
        }
        inline app::ITimelineStateRequirementResolverArray__Class** type_info = &type_info_ref;
        inline app::ITimelineStateRequirementResolverArray__Class* get_class() {
            return il2cpp::get_class<app::ITimelineStateRequirementResolverArray__Class>(type_info, "", "ITimelineStateRequirementResolverArray");
        }
        inline app::ITimelineStateRequirementResolverArray__Array* create_array(int size) {
            return il2cpp::array_new<app::ITimelineStateRequirementResolverArray__Array>(get_class(), size);
        }
        inline app::ITimelineStateRequirementResolverArray__Array* create_array(const std::vector<app::ITimelineStateRequirementResolverArray*>& items) {
            return il2cpp::array_new<app::ITimelineStateRequirementResolverArray__Array>(get_class(), items);
        }
    } // namespace ITimelineStateRequirementResolverArray
} // namespace app::classes::types
