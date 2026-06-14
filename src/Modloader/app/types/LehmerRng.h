#pragma once
#include <Modloader/app/structs/LehmerRng.h>
#include <Modloader/app/structs/LehmerRng__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace LehmerRng {
        inline app::LehmerRng__Class** type_info() {
            static app::LehmerRng__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::LehmerRng__Class**)(modloader::win::memory::resolve_rva(0x04734268));
            }
            return cache;
        }
        inline app::LehmerRng__Class* get_class() {
            return il2cpp::get_class<app::LehmerRng__Class>(type_info(), "Moon", "LehmerRng");
        }
        inline app::LehmerRng* create() {
            return il2cpp::create_object<app::LehmerRng>(get_class());
        }
    } // namespace LehmerRng
} // namespace app::classes::types
