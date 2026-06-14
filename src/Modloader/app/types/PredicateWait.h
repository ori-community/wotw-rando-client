#pragma once
#include <Modloader/app/structs/PredicateWait.h>
#include <Modloader/app/structs/PredicateWait__Array.h>
#include <Modloader/app/structs/PredicateWait__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace PredicateWait {
        inline app::PredicateWait__Class** type_info() {
            static app::PredicateWait__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::PredicateWait__Class**)(modloader::win::memory::resolve_rva(0x0476D0A8));
            }
            return cache;
        }
        inline app::PredicateWait__Class* get_class() {
            return il2cpp::get_class<app::PredicateWait__Class>(type_info(), "ZenFulcrum.EmbeddedBrowser", "PredicateWait");
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
