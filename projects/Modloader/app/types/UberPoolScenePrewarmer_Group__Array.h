#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace UberPoolScenePrewarmer_Group__Array {
        namespace {
            inline app::UberPoolScenePrewarmer_Group__Array__Class* type_info_ref = nullptr;
        }
        inline app::UberPoolScenePrewarmer_Group__Array__Class** type_info = &type_info_ref;
        inline app::UberPoolScenePrewarmer_Group__Array__Class* get_class() {
            return il2cpp::get_class<app::UberPoolScenePrewarmer_Group__Array__Class>(type_info, "Moon.pooling", "UberPoolScenePrewarmer+Group[]");
        }
        inline app::UberPoolScenePrewarmer_Group__Array* create() {
            return il2cpp::create_object<app::UberPoolScenePrewarmer_Group__Array>(get_class());
        }
    } // namespace UberPoolScenePrewarmer_Group__Array
} // namespace app::classes::types
