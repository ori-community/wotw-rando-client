#pragma once
#include <Modloader/app/structs/DamageResultContext.h>
#include <Modloader/app/structs/DamageResultContext__Boxed.h>
#include <Modloader/app/structs/DamageResultContext__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace DamageResultContext {
        inline app::DamageResultContext__Class** type_info() {
            static app::DamageResultContext__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::DamageResultContext__Class**)(modloader::win::memory::resolve_rva(0x04705EB8));
            }
            return cache;
        }
        inline app::DamageResultContext__Class* get_class() {
            return il2cpp::get_class<app::DamageResultContext__Class>(type_info(), "", "DamageResultContext");
        }
        inline app::DamageResultContext* create() {
            return il2cpp::create_object<app::DamageResultContext>(get_class());
        }
        inline app::DamageResultContext__Boxed* box(app::DamageResultContext value) {
            return il2cpp::box_value<app::DamageResultContext__Boxed>(get_class(), value);
        }
    } // namespace DamageResultContext
} // namespace app::classes::types
