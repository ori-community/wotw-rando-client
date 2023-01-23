#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/IMoonEffectComposition__Class.h>
#include <Modloader/app/structs/IMoonEffectComposition__Array.h>
#include <Modloader/app/structs/IMoonEffectComposition.h>

namespace app::classes::types {
    namespace IMoonEffectComposition {
        inline app::IMoonEffectComposition__Class** type_info = (app::IMoonEffectComposition__Class**)(modloader::win::memory::resolve_rva(0x04772F58));
        inline app::IMoonEffectComposition__Class* get_class() {
            return il2cpp::get_class<app::IMoonEffectComposition__Class>(type_info, "Moon.EffectsFramework", "IMoonEffectComposition");
        }
        inline app::IMoonEffectComposition__Array* create_array(int size) {
            return il2cpp::array_new<app::IMoonEffectComposition__Array>(get_class(), size);
        }
        inline app::IMoonEffectComposition__Array* create_array(const std::vector<app::IMoonEffectComposition*>& items) {
            return il2cpp::array_new<app::IMoonEffectComposition__Array>(get_class(), items);
        }
    } // namespace IMoonEffectComposition
} // namespace app::classes::types
