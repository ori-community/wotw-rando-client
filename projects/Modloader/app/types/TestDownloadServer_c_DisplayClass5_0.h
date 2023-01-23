#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/TestDownloadServer_c_DisplayClass5_0__Class.h>
#include <Modloader/app/structs/TestDownloadServer_c_DisplayClass5_0.h>

namespace app::classes::types {
    namespace TestDownloadServer_c_DisplayClass5_0 {
        inline app::TestDownloadServer_c_DisplayClass5_0__Class** type_info = (app::TestDownloadServer_c_DisplayClass5_0__Class**)(modloader::win::memory::resolve_rva(0x0474AB88));
        inline app::TestDownloadServer_c_DisplayClass5_0__Class* get_class() {
            return il2cpp::get_nested_class<app::TestDownloadServer_c_DisplayClass5_0__Class>(type_info, "ZenFulcrum.EmbeddedBrowser", "TestDownloadServer", "<>c__DisplayClass5_0");
        }
        inline app::TestDownloadServer_c_DisplayClass5_0* create() {
            return il2cpp::create_object<app::TestDownloadServer_c_DisplayClass5_0>(get_class());
        }
    } // namespace TestDownloadServer_c_DisplayClass5_0
} // namespace app::classes::types
