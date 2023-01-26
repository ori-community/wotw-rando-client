#pragma once
#include <Modloader/app/structs/JSException.h>
#include <Modloader/app/structs/JSException__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace JSException {
        inline app::JSException__Class** type_info() {
            static app::JSException__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::JSException__Class**)(modloader::win::memory::resolve_rva(0x047678D0));
            }
            return cache;
        }
        inline app::JSException__Class* get_class() {
            return il2cpp::get_class<app::JSException__Class>(type_info(), "ZenFulcrum.EmbeddedBrowser", "JSException");
        }
        inline app::JSException* create() {
            return il2cpp::create_object<app::JSException>(get_class());
        }
    } // namespace JSException
} // namespace app::classes::types
