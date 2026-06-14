#pragma once
#include <Modloader/app/structs/IRenderPostprocessor__Array.h>
#include <Modloader/app/structs/IRenderPostprocessor__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace IRenderPostprocessor__Array {
        inline app::IRenderPostprocessor__Array__Class** type_info() {
            static app::IRenderPostprocessor__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::IRenderPostprocessor__Array__Class**)(modloader::win::memory::resolve_rva(0x047480C0));
            }
            return cache;
        }
        inline app::IRenderPostprocessor__Array__Class* get_class() {
            return il2cpp::get_class<app::IRenderPostprocessor__Array__Class>(type_info(), "", "IRenderPostprocessor[]");
        }
        inline app::IRenderPostprocessor__Array* create() {
            return il2cpp::create_object<app::IRenderPostprocessor__Array>(get_class());
        }
    } // namespace IRenderPostprocessor__Array
} // namespace app::classes::types
