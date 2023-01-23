#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/JobBasedAnimatorPostprocessGroupData__Class.h>
#include <Modloader/app/structs/JobBasedAnimatorPostprocessGroupData.h>
#include <Modloader/app/structs/JobBasedAnimatorPostprocessGroupData__Boxed.h>
#include <Modloader/app/structs/JobBasedAnimatorPostprocessGroupData__Array.h>

namespace app::classes::types {
    namespace JobBasedAnimatorPostprocessGroupData {
        namespace {
            inline app::JobBasedAnimatorPostprocessGroupData__Class* type_info_ref = nullptr;
        }
        inline app::JobBasedAnimatorPostprocessGroupData__Class** type_info = &type_info_ref;
        inline app::JobBasedAnimatorPostprocessGroupData__Class* get_class() {
            return il2cpp::get_class<app::JobBasedAnimatorPostprocessGroupData__Class>(type_info, "Moon.Animation", "JobBasedAnimatorPostprocessGroupData");
        }
        inline app::JobBasedAnimatorPostprocessGroupData* create() {
            return il2cpp::create_object<app::JobBasedAnimatorPostprocessGroupData>(get_class());
        }
        inline app::JobBasedAnimatorPostprocessGroupData__Boxed* box(app::JobBasedAnimatorPostprocessGroupData value) {
            return il2cpp::box_value<app::JobBasedAnimatorPostprocessGroupData__Boxed>(get_class(), value);
        }
        inline app::JobBasedAnimatorPostprocessGroupData__Array* create_array(int size) {
            return il2cpp::array_new<app::JobBasedAnimatorPostprocessGroupData__Array>(get_class(), size);
        }
        inline app::JobBasedAnimatorPostprocessGroupData__Array* create_array(const std::vector<app::JobBasedAnimatorPostprocessGroupData>& items) {
            return il2cpp::array_new<app::JobBasedAnimatorPostprocessGroupData__Array>(get_class(), items);
        }
    } // namespace JobBasedAnimatorPostprocessGroupData
} // namespace app::classes::types
