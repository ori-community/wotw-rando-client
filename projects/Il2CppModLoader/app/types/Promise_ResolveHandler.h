#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace Promise_ResolveHandler {
        inline app::Promise_ResolveHandler__Class** type_info = (app::Promise_ResolveHandler__Class**)(modloader::win::memory::resolve_rva(0x0478DD70));
        inline app::Promise_ResolveHandler__Class* get_class() {
            return il2cpp::get_nested_class<app::Promise_ResolveHandler__Class>(type_info, "ZenFulcrum.EmbeddedBrowser", "Promise", "ResolveHandler");
        }
        inline app::Promise_ResolveHandler* create() {
            return il2cpp::create_object<app::Promise_ResolveHandler>(get_class());
        }
        inline app::Promise_ResolveHandler__Boxed* box(app::Promise_ResolveHandler value) {
            return il2cpp::box_value<app::Promise_ResolveHandler__Boxed>(get_class(), value);
        }
        inline app::Promise_ResolveHandler__Array* create_array(int size) {
            return il2cpp::array_new<app::Promise_ResolveHandler__Array>(get_class(), size);
        }
        inline app::Promise_ResolveHandler__Array* create_array(const std::vector<app::Promise_ResolveHandler>& items) {
            return il2cpp::array_new<app::Promise_ResolveHandler__Array>(get_class(), items);
        }
    } // namespace Promise_ResolveHandler
} // namespace app::classes::types
