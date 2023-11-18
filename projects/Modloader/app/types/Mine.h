#pragma once
#include <Modloader/app/structs/Mine.h>
#include <Modloader/app/structs/Mine__Array.h>
#include <Modloader/app/structs/Mine__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace Mine {
        inline app::Mine__Class** type_info() {
            static app::Mine__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::Mine__Class**)(modloader::win::memory::resolve_rva(0x0473B098));
            }
            return cache;
        }
        inline app::Mine__Class* get_class() {
            return il2cpp::get_class<app::Mine__Class>(type_info(), "", "Mine");
        }
        inline app::Mine* create() {
            return il2cpp::create_object<app::Mine>(get_class());
        }
        inline app::Mine__Array* create_array(int size) {
            return il2cpp::array_new<app::Mine__Array>(get_class(), size);
        }
        inline app::Mine__Array* create_array(const std::vector<app::Mine*>& items) {
            return il2cpp::array_new<app::Mine__Array>(get_class(), items);
        }
    } // namespace Mine
} // namespace app::classes::types
