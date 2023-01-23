#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/ActivityFilter__Class.h>
#include <Modloader/app/structs/ActivityFilter.h>

namespace app::classes::types {
    namespace ActivityFilter {
        inline app::ActivityFilter__Class** type_info = (app::ActivityFilter__Class**)(modloader::win::memory::resolve_rva(0x04798610));
        inline app::ActivityFilter__Class* get_class() {
            return il2cpp::get_class<app::ActivityFilter__Class>(type_info, "System.Diagnostics.Tracing", "ActivityFilter");
        }
        inline app::ActivityFilter* create() {
            return il2cpp::create_object<app::ActivityFilter>(get_class());
        }
    } // namespace ActivityFilter
} // namespace app::classes::types
