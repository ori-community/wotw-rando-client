#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/TypeFilter__Class.h>
#include <Modloader/app/structs/TypeFilter.h>

namespace app::classes::types {
    namespace TypeFilter {
        inline app::TypeFilter__Class** type_info = (app::TypeFilter__Class**)(modloader::win::memory::resolve_rva(0x0477A718));
        inline app::TypeFilter__Class* get_class() {
            return il2cpp::get_class<app::TypeFilter__Class>(type_info, "System.Reflection", "TypeFilter");
        }
        inline app::TypeFilter* create() {
            return il2cpp::create_object<app::TypeFilter>(get_class());
        }
    } // namespace TypeFilter
} // namespace app::classes::types
