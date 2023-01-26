#pragma once
#include <Modloader/app/structs/DynamicInstantiationScanner_EvaluationCtx.h>
#include <Modloader/app/structs/DynamicInstantiationScanner_EvaluationCtx__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace DynamicInstantiationScanner_EvaluationCtx {
        inline app::DynamicInstantiationScanner_EvaluationCtx__Class** type_info() {
            static app::DynamicInstantiationScanner_EvaluationCtx__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::DynamicInstantiationScanner_EvaluationCtx__Class**)(modloader::win::memory::resolve_rva(0x04791400));
            }
            return cache;
        }
        inline app::DynamicInstantiationScanner_EvaluationCtx__Class* get_class() {
            return il2cpp::get_nested_class<app::DynamicInstantiationScanner_EvaluationCtx__Class>(type_info(), "", "DynamicInstantiationScanner", "EvaluationCtx");
        }
        inline app::DynamicInstantiationScanner_EvaluationCtx* create() {
            return il2cpp::create_object<app::DynamicInstantiationScanner_EvaluationCtx>(get_class());
        }
    } // namespace DynamicInstantiationScanner_EvaluationCtx
} // namespace app::classes::types
