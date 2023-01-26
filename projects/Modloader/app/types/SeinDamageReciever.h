#pragma once
#include <Modloader/app/structs/SeinDamageReciever.h>
#include <Modloader/app/structs/SeinDamageReciever__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SeinDamageReciever {
        inline app::SeinDamageReciever__Class** type_info() {
            static app::SeinDamageReciever__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::SeinDamageReciever__Class**)(modloader::win::memory::resolve_rva(0x0470E738));
            }
            return cache;
        }
        inline app::SeinDamageReciever__Class* get_class() {
            return il2cpp::get_class<app::SeinDamageReciever__Class>(type_info(), "", "SeinDamageReciever");
        }
        inline app::SeinDamageReciever* create() {
            return il2cpp::create_object<app::SeinDamageReciever>(get_class());
        }
    } // namespace SeinDamageReciever
} // namespace app::classes::types
