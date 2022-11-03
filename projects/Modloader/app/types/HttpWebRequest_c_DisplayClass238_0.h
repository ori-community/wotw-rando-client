#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace HttpWebRequest_c_DisplayClass238_0 {
        inline app::HttpWebRequest_c_DisplayClass238_0__Class** type_info = (app::HttpWebRequest_c_DisplayClass238_0__Class**)(modloader::win::memory::resolve_rva(0x0475F898));
        inline app::HttpWebRequest_c_DisplayClass238_0__Class* get_class() {
            return il2cpp::get_nested_class<app::HttpWebRequest_c_DisplayClass238_0__Class>(type_info, "System.Net", "HttpWebRequest", "<>c__DisplayClass238_0");
        }
        inline app::HttpWebRequest_c_DisplayClass238_0* create() {
            return il2cpp::create_object<app::HttpWebRequest_c_DisplayClass238_0>(get_class());
        }
    } // namespace HttpWebRequest_c_DisplayClass238_0
} // namespace app::classes::types
