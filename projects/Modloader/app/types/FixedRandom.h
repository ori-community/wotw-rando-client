#pragma once
#include <Modloader/app/structs/FixedRandom.h>
#include <Modloader/app/structs/FixedRandom__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace FixedRandom {
        inline app::FixedRandom__Class** type_info() {
            static app::FixedRandom__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::FixedRandom__Class**)(modloader::win::memory::resolve_rva(0x04777500));
            }
            return cache;
        }
        inline app::FixedRandom__Class* get_class() {
            return il2cpp::get_class<app::FixedRandom__Class>(type_info(), "", "FixedRandom");
        }
        inline app::FixedRandom* create() {
            return il2cpp::create_object<app::FixedRandom>(get_class());
        }
    } // namespace FixedRandom
} // namespace app::classes::types
