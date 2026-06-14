#pragma once
#include <Modloader/app/structs/WebHeaderCollection.h>
#include <Modloader/app/structs/WebHeaderCollection__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace WebHeaderCollection {
        inline app::WebHeaderCollection__Class** type_info() {
            static app::WebHeaderCollection__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::WebHeaderCollection__Class**)(modloader::win::memory::resolve_rva(0x0477B2E8));
            }
            return cache;
        }
        inline app::WebHeaderCollection__Class* get_class() {
            return il2cpp::get_class<app::WebHeaderCollection__Class>(type_info(), "System.Net", "WebHeaderCollection");
        }
        inline app::WebHeaderCollection* create() {
            return il2cpp::create_object<app::WebHeaderCollection>(get_class());
        }
    } // namespace WebHeaderCollection
} // namespace app::classes::types
