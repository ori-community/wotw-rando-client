#pragma once
#include <Modloader/app/structs/TargetInvocationException.h>
#include <Modloader/app/structs/TargetInvocationException__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace TargetInvocationException {
        inline app::TargetInvocationException__Class** type_info() {
            static app::TargetInvocationException__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::TargetInvocationException__Class**)(modloader::win::memory::resolve_rva(0x04735E28));
            }
            return cache;
        }
        inline app::TargetInvocationException__Class* get_class() {
            return il2cpp::get_class<app::TargetInvocationException__Class>(type_info(), "System.Reflection", "TargetInvocationException");
        }
        inline app::TargetInvocationException* create() {
            return il2cpp::create_object<app::TargetInvocationException>(get_class());
        }
    } // namespace TargetInvocationException
} // namespace app::classes::types
