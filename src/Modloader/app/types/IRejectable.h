#pragma once
#include <Modloader/app/structs/IRejectable.h>
#include <Modloader/app/structs/IRejectable__Array.h>
#include <Modloader/app/structs/IRejectable__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace IRejectable {
        inline app::IRejectable__Class** type_info() {
            static app::IRejectable__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::IRejectable__Class**)(modloader::win::memory::resolve_rva(0x04719020));
            }
            return cache;
        }
        inline app::IRejectable__Class* get_class() {
            return il2cpp::get_class<app::IRejectable__Class>(type_info(), "ZenFulcrum.EmbeddedBrowser", "IRejectable");
        }
        inline app::IRejectable__Array* create_array(int size) {
            return il2cpp::array_new<app::IRejectable__Array>(get_class(), size);
        }
        inline app::IRejectable__Array* create_array(const std::vector<app::IRejectable*>& items) {
            return il2cpp::array_new<app::IRejectable__Array>(get_class(), items);
        }
    } // namespace IRejectable
} // namespace app::classes::types
