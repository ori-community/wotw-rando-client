#pragma once
#include <Modloader/app/structs/TargetParameterCountException.h>
#include <Modloader/app/structs/TargetParameterCountException__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace TargetParameterCountException {
        inline app::TargetParameterCountException__Class** type_info() {
            static app::TargetParameterCountException__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::TargetParameterCountException__Class**)(modloader::win::memory::resolve_rva(0x04715BB8));
            }
            return cache;
        }
        inline app::TargetParameterCountException__Class* get_class() {
            return il2cpp::get_class<app::TargetParameterCountException__Class>(type_info(), "System.Reflection", "TargetParameterCountException");
        }
        inline app::TargetParameterCountException* create() {
            return il2cpp::create_object<app::TargetParameterCountException>(get_class());
        }
    } // namespace TargetParameterCountException
} // namespace app::classes::types
