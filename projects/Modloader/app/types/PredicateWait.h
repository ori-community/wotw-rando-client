#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace PredicateWait {
        inline app::PredicateWait__Class** type_info = (app::PredicateWait__Class**)(modloader::win::memory::resolve_rva(0x0476D0A8));
        inline app::PredicateWait__Class* get_class() {
            return il2cpp::get_class<app::PredicateWait__Class>(type_info, "ZenFulcrum.EmbeddedBrowser", "PredicateWait");
        }
        inline app::PredicateWait* create() {
            return il2cpp::create_object<app::PredicateWait>(get_class());
        }
        inline app::PredicateWait__Array* create_array(int size) {
            return il2cpp::array_new<app::PredicateWait__Array>(get_class(), size);
        }
        inline app::PredicateWait__Array* create_array(const std::vector<app::PredicateWait*>& items) {
            return il2cpp::array_new<app::PredicateWait__Array>(get_class(), items);
        }
    } // namespace PredicateWait
} // namespace app::classes::types
