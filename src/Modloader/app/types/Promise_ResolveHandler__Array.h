#pragma once
#include <Modloader/app/structs/Promise_ResolveHandler__Array.h>
#include <Modloader/app/structs/Promise_ResolveHandler__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace Promise_ResolveHandler__Array {
        inline app::Promise_ResolveHandler__Array__Class** type_info() {
            static app::Promise_ResolveHandler__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::Promise_ResolveHandler__Array__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::Promise_ResolveHandler__Array__Class* get_class() {
            return il2cpp::get_class<app::Promise_ResolveHandler__Array__Class>(type_info(), "ZenFulcrum.EmbeddedBrowser", "Promise+ResolveHandler[]");
        }
        inline app::Promise_ResolveHandler__Array* create() {
            return il2cpp::create_object<app::Promise_ResolveHandler__Array>(get_class());
        }
    } // namespace Promise_ResolveHandler__Array
} // namespace app::classes::types
