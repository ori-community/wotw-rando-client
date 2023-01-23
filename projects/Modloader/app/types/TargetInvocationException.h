#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/TargetInvocationException__Class.h>
#include <Modloader/app/structs/TargetInvocationException.h>

namespace app::classes::types {
    namespace TargetInvocationException {
        inline app::TargetInvocationException__Class** type_info = (app::TargetInvocationException__Class**)(modloader::win::memory::resolve_rva(0x04735E28));
        inline app::TargetInvocationException__Class* get_class() {
            return il2cpp::get_class<app::TargetInvocationException__Class>(type_info, "System.Reflection", "TargetInvocationException");
        }
        inline app::TargetInvocationException* create() {
            return il2cpp::create_object<app::TargetInvocationException>(get_class());
        }
    } // namespace TargetInvocationException
} // namespace app::classes::types
