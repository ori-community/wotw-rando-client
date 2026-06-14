#pragma once
#include <Modloader/app/structs/LocalCertSelectionCallback.h>
#include <Modloader/app/structs/LocalCertSelectionCallback__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace LocalCertSelectionCallback {
        inline app::LocalCertSelectionCallback__Class** type_info() {
            static app::LocalCertSelectionCallback__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::LocalCertSelectionCallback__Class**)(modloader::win::memory::resolve_rva(0x0473FD50));
            }
            return cache;
        }
        inline app::LocalCertSelectionCallback__Class* get_class() {
            return il2cpp::get_class<app::LocalCertSelectionCallback__Class>(type_info(), "System.Net.Security", "LocalCertSelectionCallback");
        }
        inline app::LocalCertSelectionCallback* create() {
            return il2cpp::create_object<app::LocalCertSelectionCallback>(get_class());
        }
    } // namespace LocalCertSelectionCallback
} // namespace app::classes::types
