#pragma once
#include <Modloader/app/structs/ShrineCombat.h>
#include <Modloader/app/structs/ShrineCombat__Array.h>
#include <Modloader/app/structs/ShrineCombat__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ShrineCombat {
        inline app::ShrineCombat__Class** type_info() {
            static app::ShrineCombat__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::ShrineCombat__Class**)(modloader::win::memory::resolve_rva(0x04734488));
            }
            return cache;
        }
        inline app::ShrineCombat__Class* get_class() {
            return il2cpp::get_class<app::ShrineCombat__Class>(type_info(), "", "ShrineCombat");
        }
        inline app::ShrineCombat* create() {
            return il2cpp::create_object<app::ShrineCombat>(get_class());
        }
        inline app::ShrineCombat__Array* create_array(int size) {
            return il2cpp::array_new<app::ShrineCombat__Array>(get_class(), size);
        }
        inline app::ShrineCombat__Array* create_array(const std::vector<app::ShrineCombat*>& items) {
            return il2cpp::array_new<app::ShrineCombat__Array>(get_class(), items);
        }
    } // namespace ShrineCombat
} // namespace app::classes::types
