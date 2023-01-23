#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/XmlDownloadManager__Class.h>
#include <Modloader/app/structs/XmlDownloadManager.h>

namespace app::classes::types {
    namespace XmlDownloadManager {
        inline app::XmlDownloadManager__Class** type_info = (app::XmlDownloadManager__Class**)(modloader::win::memory::resolve_rva(0x04728A78));
        inline app::XmlDownloadManager__Class* get_class() {
            return il2cpp::get_class<app::XmlDownloadManager__Class>(type_info, "System.Xml", "XmlDownloadManager");
        }
        inline app::XmlDownloadManager* create() {
            return il2cpp::create_object<app::XmlDownloadManager>(get_class());
        }
    } // namespace XmlDownloadManager
} // namespace app::classes::types
