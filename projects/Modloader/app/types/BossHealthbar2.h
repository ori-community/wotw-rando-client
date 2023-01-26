#pragma once
#include <Modloader/app/structs/BossHealthbar2.h>
#include <Modloader/app/structs/BossHealthbar2__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace BossHealthbar2 {
        inline app::BossHealthbar2__Class** type_info() {
            static app::BossHealthbar2__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::BossHealthbar2__Class**)(modloader::win::memory::resolve_rva(0x04771768));
            }
            return cache;
        }
        inline app::BossHealthbar2__Class* get_class() {
            return il2cpp::get_class<app::BossHealthbar2__Class>(type_info(), "", "BossHealthbar2");
        }
        inline app::BossHealthbar2* create() {
            return il2cpp::create_object<app::BossHealthbar2>(get_class());
        }
    } // namespace BossHealthbar2
} // namespace app::classes::types
