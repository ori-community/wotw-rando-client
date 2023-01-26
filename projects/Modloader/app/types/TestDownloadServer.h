#pragma once
#include <Modloader/app/structs/TestDownloadServer.h>
#include <Modloader/app/structs/TestDownloadServer__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace TestDownloadServer {
        inline app::TestDownloadServer__Class** type_info() {
            static app::TestDownloadServer__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::TestDownloadServer__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::TestDownloadServer__Class* get_class() {
            return il2cpp::get_class<app::TestDownloadServer__Class>(type_info(), "ZenFulcrum.EmbeddedBrowser", "TestDownloadServer");
        }
        inline app::TestDownloadServer* create() {
            return il2cpp::create_object<app::TestDownloadServer>(get_class());
        }
    } // namespace TestDownloadServer
} // namespace app::classes::types
