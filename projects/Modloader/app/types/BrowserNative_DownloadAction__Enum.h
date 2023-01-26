#pragma once
#include <Modloader/app/structs/BrowserNative_DownloadAction__Enum.h>
#include <Modloader/app/structs/BrowserNative_DownloadAction__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace BrowserNative_DownloadAction__Enum {
        inline app::BrowserNative_DownloadAction__Enum__Class** type_info() {
            static app::BrowserNative_DownloadAction__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::BrowserNative_DownloadAction__Enum__Class**)(modloader::win::memory::resolve_rva(0x04758A68));
            }
            return cache;
        }
        inline app::BrowserNative_DownloadAction__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::BrowserNative_DownloadAction__Enum__Class>(type_info(), "ZenFulcrum.EmbeddedBrowser", "BrowserNative", "DownloadAction");
        }
        inline app::BrowserNative_DownloadAction__Enum* create() {
            return il2cpp::create_object<app::BrowserNative_DownloadAction__Enum>(get_class());
        }
    } // namespace BrowserNative_DownloadAction__Enum
} // namespace app::classes::types
