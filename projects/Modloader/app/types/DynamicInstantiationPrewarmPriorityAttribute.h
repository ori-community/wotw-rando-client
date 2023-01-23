#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/DynamicInstantiationPrewarmPriorityAttribute__Class.h>
#include <Modloader/app/structs/DynamicInstantiationPrewarmPriorityAttribute.h>

namespace app::classes::types {
    namespace DynamicInstantiationPrewarmPriorityAttribute {
        namespace {
            inline app::DynamicInstantiationPrewarmPriorityAttribute__Class* type_info_ref = nullptr;
        }
        inline app::DynamicInstantiationPrewarmPriorityAttribute__Class** type_info = &type_info_ref;
        inline app::DynamicInstantiationPrewarmPriorityAttribute__Class* get_class() {
            return il2cpp::get_class<app::DynamicInstantiationPrewarmPriorityAttribute__Class>(type_info, "", "DynamicInstantiationPrewarmPriorityAttribute");
        }
        inline app::DynamicInstantiationPrewarmPriorityAttribute* create() {
            return il2cpp::create_object<app::DynamicInstantiationPrewarmPriorityAttribute>(get_class());
        }
    } // namespace DynamicInstantiationPrewarmPriorityAttribute
} // namespace app::classes::types
