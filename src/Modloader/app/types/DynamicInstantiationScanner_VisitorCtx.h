#pragma once
#include <Modloader/app/structs/DynamicInstantiationScanner_VisitorCtx.h>
#include <Modloader/app/structs/DynamicInstantiationScanner_VisitorCtx__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace DynamicInstantiationScanner_VisitorCtx {
        inline app::DynamicInstantiationScanner_VisitorCtx__Class** type_info() {
            static app::DynamicInstantiationScanner_VisitorCtx__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::DynamicInstantiationScanner_VisitorCtx__Class**)(modloader::win::memory::resolve_rva(0x04748018));
            }
            return cache;
        }
        inline app::DynamicInstantiationScanner_VisitorCtx__Class* get_class() {
            return il2cpp::get_nested_class<app::DynamicInstantiationScanner_VisitorCtx__Class>(type_info(), "", "DynamicInstantiationScanner", "VisitorCtx");
        }
        inline app::DynamicInstantiationScanner_VisitorCtx* create() {
            return il2cpp::create_object<app::DynamicInstantiationScanner_VisitorCtx>(get_class());
        }
    } // namespace DynamicInstantiationScanner_VisitorCtx
} // namespace app::classes::types
