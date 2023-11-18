#pragma once
#include <Modloader/app/structs/AkWwiseXMLWatcher.h>
#include <Modloader/app/structs/AkWwiseXMLWatcher__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace AkWwiseXMLWatcher {
        inline app::AkWwiseXMLWatcher__Class** type_info() {
            static app::AkWwiseXMLWatcher__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::AkWwiseXMLWatcher__Class**)(modloader::win::memory::resolve_rva(0x0475C778));
            }
            return cache;
        }
        inline app::AkWwiseXMLWatcher__Class* get_class() {
            return il2cpp::get_class<app::AkWwiseXMLWatcher__Class>(type_info(), "", "AkWwiseXMLWatcher");
        }
        inline app::AkWwiseXMLWatcher* create() {
            return il2cpp::create_object<app::AkWwiseXMLWatcher>(get_class());
        }
    } // namespace AkWwiseXMLWatcher
} // namespace app::classes::types
