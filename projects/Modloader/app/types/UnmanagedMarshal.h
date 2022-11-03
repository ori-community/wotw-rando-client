#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace UnmanagedMarshal {
        namespace {
            inline app::UnmanagedMarshal__Class* type_info_ref = nullptr;
        }
        inline app::UnmanagedMarshal__Class** type_info = &type_info_ref;
        inline app::UnmanagedMarshal__Class* get_class() {
            return il2cpp::get_class<app::UnmanagedMarshal__Class>(type_info, "System.Reflection.Emit", "UnmanagedMarshal");
        }
        inline app::UnmanagedMarshal* create() {
            return il2cpp::create_object<app::UnmanagedMarshal>(get_class());
        }
    } // namespace UnmanagedMarshal
} // namespace app::classes::types
