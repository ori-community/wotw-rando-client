#pragma once
#include <Modloader/app/structs/RandomSeeder.h>
#include <Modloader/app/structs/RandomSeeder__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace RandomSeeder {
        inline app::RandomSeeder__Class** type_info() {
            static app::RandomSeeder__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::RandomSeeder__Class**)(modloader::win::memory::resolve_rva(0x04740660));
            }
            return cache;
        }
        inline app::RandomSeeder__Class* get_class() {
            return il2cpp::get_class<app::RandomSeeder__Class>(type_info(), "Swing", "RandomSeeder");
        }
        inline app::RandomSeeder* create() {
            return il2cpp::create_object<app::RandomSeeder>(get_class());
        }
    } // namespace RandomSeeder
} // namespace app::classes::types
