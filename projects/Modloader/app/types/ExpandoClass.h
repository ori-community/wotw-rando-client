#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/ExpandoClass__Class.h>
#include <Modloader/app/structs/ExpandoClass.h>

namespace app::classes::types {
    namespace ExpandoClass {
        inline app::ExpandoClass__Class** type_info = (app::ExpandoClass__Class**)(modloader::win::memory::resolve_rva(0x0477A2E0));
        inline app::ExpandoClass__Class* get_class() {
            return il2cpp::get_class<app::ExpandoClass__Class>(type_info, "System.Dynamic", "ExpandoClass");
        }
        inline app::ExpandoClass* create() {
            return il2cpp::create_object<app::ExpandoClass>(get_class());
        }
    } // namespace ExpandoClass
} // namespace app::classes::types
