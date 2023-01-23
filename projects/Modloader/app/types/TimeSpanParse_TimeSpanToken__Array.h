#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/TimeSpanParse_TimeSpanToken__Array__Class.h>
#include <Modloader/app/structs/TimeSpanParse_TimeSpanToken__Array.h>

namespace app::classes::types {
    namespace TimeSpanParse_TimeSpanToken__Array {
        inline app::TimeSpanParse_TimeSpanToken__Array__Class** type_info = (app::TimeSpanParse_TimeSpanToken__Array__Class**)(modloader::win::memory::resolve_rva(0x04791F10));
        inline app::TimeSpanParse_TimeSpanToken__Array__Class* get_class() {
            return il2cpp::get_class<app::TimeSpanParse_TimeSpanToken__Array__Class>(type_info, "System.Globalization", "TimeSpanParse+TimeSpanToken[]");
        }
        inline app::TimeSpanParse_TimeSpanToken__Array* create() {
            return il2cpp::create_object<app::TimeSpanParse_TimeSpanToken__Array>(get_class());
        }
    } // namespace TimeSpanParse_TimeSpanToken__Array
} // namespace app::classes::types
