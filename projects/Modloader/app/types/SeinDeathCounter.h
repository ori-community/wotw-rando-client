#pragma once
#include <Modloader/app/structs/SeinDeathCounter.h>
#include <Modloader/app/structs/SeinDeathCounter__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SeinDeathCounter {
        inline app::SeinDeathCounter__Class** type_info() {
            static app::SeinDeathCounter__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::SeinDeathCounter__Class**)(modloader::win::memory::resolve_rva(0x0471C2C8));
            }
            return cache;
        }
        inline app::SeinDeathCounter__Class* get_class() {
            return il2cpp::get_class<app::SeinDeathCounter__Class>(type_info(), "", "SeinDeathCounter");
        }
        inline app::SeinDeathCounter* create() {
            return il2cpp::create_object<app::SeinDeathCounter>(get_class());
        }
    } // namespace SeinDeathCounter
} // namespace app::classes::types
