#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/ITimelineStateRequirementResolverArray__Array__Class.h>
#include <Modloader/app/structs/ITimelineStateRequirementResolverArray__Array.h>

namespace app::classes::types {
    namespace ITimelineStateRequirementResolverArray__Array {
        namespace {
            inline app::ITimelineStateRequirementResolverArray__Array__Class* type_info_ref = nullptr;
        }
        inline app::ITimelineStateRequirementResolverArray__Array__Class** type_info = &type_info_ref;
        inline app::ITimelineStateRequirementResolverArray__Array__Class* get_class() {
            return il2cpp::get_class<app::ITimelineStateRequirementResolverArray__Array__Class>(type_info, "", "ITimelineStateRequirementResolverArray[]");
        }
        inline app::ITimelineStateRequirementResolverArray__Array* create() {
            return il2cpp::create_object<app::ITimelineStateRequirementResolverArray__Array>(get_class());
        }
    } // namespace ITimelineStateRequirementResolverArray__Array
} // namespace app::classes::types
