#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace IContextAttribute__Array {
        namespace {
            inline app::IContextAttribute__Array__Class* type_info_ref = nullptr;
        }
        inline app::IContextAttribute__Array__Class** type_info = &type_info_ref;
        inline app::IContextAttribute__Array__Class* get_class() {
            return il2cpp::get_class<app::IContextAttribute__Array__Class>(type_info, "System.Runtime.Remoting.Contexts", "IContextAttribute[]");
        }
        inline app::IContextAttribute__Array* create() {
            return il2cpp::create_object<app::IContextAttribute__Array>(get_class());
        }
    } // namespace IContextAttribute__Array
} // namespace app::classes::types
