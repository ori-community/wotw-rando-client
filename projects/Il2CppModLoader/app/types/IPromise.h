#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace IPromise {
        inline app::IPromise__Class** type_info = (app::IPromise__Class**)(modloader::win::memory::resolve_rva(0x0478BF78));
        inline app::IPromise__Class* get_class() {
            return il2cpp::get_class<app::IPromise__Class>(type_info, "ZenFulcrum.EmbeddedBrowser", "IPromise");
        }
        inline app::IPromise__Array* create_array(int size) {
            return il2cpp::array_new<app::IPromise__Array>(get_class(), size);
        }
        inline app::IPromise__Array* create_array(const std::vector<app::IPromise*>& items) {
            return il2cpp::array_new<app::IPromise__Array>(get_class(), items);
        }
    } // namespace IPromise
} // namespace app::classes::types
