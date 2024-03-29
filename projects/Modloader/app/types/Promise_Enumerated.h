#pragma once
#include <Modloader/app/structs/Promise_Enumerated.h>
#include <Modloader/app/structs/Promise_Enumerated__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace Promise_Enumerated {
        inline app::Promise_Enumerated__Class** type_info() {
            static app::Promise_Enumerated__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::Promise_Enumerated__Class**)(modloader::win::memory::resolve_rva(0x047681A8));
            }
            return cache;
        }
        inline app::Promise_Enumerated__Class* get_class() {
            return il2cpp::get_nested_class<app::Promise_Enumerated__Class>(type_info(), "ZenFulcrum.EmbeddedBrowser", "Promise", "Enumerated");
        }
        inline app::Promise_Enumerated* create() {
            return il2cpp::create_object<app::Promise_Enumerated>(get_class());
        }
    } // namespace Promise_Enumerated
} // namespace app::classes::types
