#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace XmlDownloadManager {
        extern IL2CPP_MODLOADER_DLLEXPORT app::XmlDownloadManager__Class** type_info;
        inline app::XmlDownloadManager__Class* get_class() {
            return il2cpp::get_class<app::XmlDownloadManager__Class>(type_info, "System.Xml", "XmlDownloadManager");
        }
        inline app::XmlDownloadManager* create() {
            return il2cpp::create_object<app::XmlDownloadManager>(get_class());
        }
    } // namespace XmlDownloadManager
} // namespace app::classes::types
