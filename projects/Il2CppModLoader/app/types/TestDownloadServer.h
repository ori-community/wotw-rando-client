#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace TestDownloadServer {
        namespace {
            inline app::TestDownloadServer__Class* type_info_ref = nullptr;
        }
        inline app::TestDownloadServer__Class** type_info = &type_info_ref;
        inline app::TestDownloadServer__Class* get_class() {
            return il2cpp::get_class<app::TestDownloadServer__Class>(type_info, "ZenFulcrum.EmbeddedBrowser", "TestDownloadServer");
        }
        inline app::TestDownloadServer* create() {
            return il2cpp::create_object<app::TestDownloadServer>(get_class());
        }
    } // namespace TestDownloadServer
} // namespace app::classes::types
