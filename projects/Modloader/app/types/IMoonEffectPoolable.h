#pragma once
#include <Modloader/app/structs/IMoonEffectPoolable.h>
#include <Modloader/app/structs/IMoonEffectPoolable__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace IMoonEffectPoolable {
        inline app::IMoonEffectPoolable__Class** type_info() {
            static app::IMoonEffectPoolable__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::IMoonEffectPoolable__Class**)(modloader::win::memory::resolve_rva(0x047451B0));
            }
            return cache;
        }
        inline app::IMoonEffectPoolable__Class* get_class() {
            return il2cpp::get_class<app::IMoonEffectPoolable__Class>(type_info(), "", "IMoonEffectPoolable");
        }
    } // namespace IMoonEffectPoolable
} // namespace app::classes::types
