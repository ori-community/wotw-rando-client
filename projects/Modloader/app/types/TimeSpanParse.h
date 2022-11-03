#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace TimeSpanParse {
        inline app::TimeSpanParse__Class** type_info = (app::TimeSpanParse__Class**)(modloader::win::memory::resolve_rva(0x04772510));
        inline app::TimeSpanParse__Class* get_class() {
            return il2cpp::get_class<app::TimeSpanParse__Class>(type_info, "System.Globalization", "TimeSpanParse");
        }
        inline app::TimeSpanParse* create() {
            return il2cpp::create_object<app::TimeSpanParse>(get_class());
        }
    } // namespace TimeSpanParse
} // namespace app::classes::types
