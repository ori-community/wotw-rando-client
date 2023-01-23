#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/IMoonEffectComposition__Array__Class.h>
#include <Modloader/app/structs/IMoonEffectComposition__Array.h>

namespace app::classes::types {
    namespace IMoonEffectComposition__Array {
        namespace {
            inline app::IMoonEffectComposition__Array__Class* type_info_ref = nullptr;
        }
        inline app::IMoonEffectComposition__Array__Class** type_info = &type_info_ref;
        inline app::IMoonEffectComposition__Array__Class* get_class() {
            return il2cpp::get_class<app::IMoonEffectComposition__Array__Class>(type_info, "Moon.EffectsFramework", "IMoonEffectComposition[]");
        }
        inline app::IMoonEffectComposition__Array* create() {
            return il2cpp::create_object<app::IMoonEffectComposition__Array>(get_class());
        }
    } // namespace IMoonEffectComposition__Array
} // namespace app::classes::types
