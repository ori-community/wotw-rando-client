#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace InvalidJSONNodeException {
        inline app::InvalidJSONNodeException__Class** type_info = (app::InvalidJSONNodeException__Class**)(modloader::win::memory::resolve_rva(0x04788090));
        inline app::InvalidJSONNodeException__Class* get_class() {
            return il2cpp::get_class<app::InvalidJSONNodeException__Class>(type_info, "ZenFulcrum.EmbeddedBrowser", "InvalidJSONNodeException");
        }
        inline app::InvalidJSONNodeException* create() {
            return il2cpp::create_object<app::InvalidJSONNodeException>(get_class());
        }
    } // namespace InvalidJSONNodeException
} // namespace app::classes::types
