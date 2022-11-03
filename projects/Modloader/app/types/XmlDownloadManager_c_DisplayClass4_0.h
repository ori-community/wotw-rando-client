#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace XmlDownloadManager_c_DisplayClass4_0 {
        inline app::XmlDownloadManager_c_DisplayClass4_0__Class** type_info = (app::XmlDownloadManager_c_DisplayClass4_0__Class**)(modloader::win::memory::resolve_rva(0x047677D8));
        inline app::XmlDownloadManager_c_DisplayClass4_0__Class* get_class() {
            return il2cpp::get_nested_class<app::XmlDownloadManager_c_DisplayClass4_0__Class>(type_info, "System.Xml", "XmlDownloadManager", "<>c__DisplayClass4_0");
        }
        inline app::XmlDownloadManager_c_DisplayClass4_0* create() {
            return il2cpp::create_object<app::XmlDownloadManager_c_DisplayClass4_0>(get_class());
        }
    } // namespace XmlDownloadManager_c_DisplayClass4_0
} // namespace app::classes::types
