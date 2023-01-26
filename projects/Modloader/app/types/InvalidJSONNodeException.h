#pragma once
#include <Modloader/app/structs/InvalidJSONNodeException.h>
#include <Modloader/app/structs/InvalidJSONNodeException__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace InvalidJSONNodeException {
        inline app::InvalidJSONNodeException__Class** type_info() {
            static app::InvalidJSONNodeException__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::InvalidJSONNodeException__Class**)(modloader::win::memory::resolve_rva(0x04788090));
            }
            return cache;
        }
        inline app::InvalidJSONNodeException__Class* get_class() {
            return il2cpp::get_class<app::InvalidJSONNodeException__Class>(type_info(), "ZenFulcrum.EmbeddedBrowser", "InvalidJSONNodeException");
        }
        inline app::InvalidJSONNodeException* create() {
            return il2cpp::create_object<app::InvalidJSONNodeException>(get_class());
        }
    } // namespace InvalidJSONNodeException
} // namespace app::classes::types
