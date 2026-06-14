#pragma once
#include <Modloader/app/structs/WaitForSeconds.h>
#include <Modloader/app/structs/WaitForSeconds__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace WaitForSeconds {
        inline app::WaitForSeconds__Class** type_info() {
            static app::WaitForSeconds__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::WaitForSeconds__Class**)(modloader::win::memory::resolve_rva(0x047597B0));
            }
            return cache;
        }
        inline app::WaitForSeconds__Class* get_class() {
            return il2cpp::get_class<app::WaitForSeconds__Class>(type_info(), "UnityEngine", "WaitForSeconds");
        }
        inline app::WaitForSeconds* create() {
            return il2cpp::create_object<app::WaitForSeconds>(get_class());
        }
    } // namespace WaitForSeconds
} // namespace app::classes::types
