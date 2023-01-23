#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/Promise__Class.h>
#include <Modloader/app/structs/Promise.h>

namespace app::classes::types {
    namespace Promise {
        inline app::Promise__Class** type_info = (app::Promise__Class**)(modloader::win::memory::resolve_rva(0x0474C528));
        inline app::Promise__Class* get_class() {
            return il2cpp::get_class<app::Promise__Class>(type_info, "ZenFulcrum.EmbeddedBrowser", "Promise");
        }
        inline app::Promise* create() {
            return il2cpp::create_object<app::Promise>(get_class());
        }
    } // namespace Promise
} // namespace app::classes::types
