#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/UberPoolScenePrewarmer__Class.h>
#include <Modloader/app/structs/UberPoolScenePrewarmer.h>

namespace app::classes::types {
    namespace UberPoolScenePrewarmer {
        namespace {
            inline app::UberPoolScenePrewarmer__Class* type_info_ref = nullptr;
        }
        inline app::UberPoolScenePrewarmer__Class** type_info = &type_info_ref;
        inline app::UberPoolScenePrewarmer__Class* get_class() {
            return il2cpp::get_class<app::UberPoolScenePrewarmer__Class>(type_info, "Moon.pooling", "UberPoolScenePrewarmer");
        }
        inline app::UberPoolScenePrewarmer* create() {
            return il2cpp::create_object<app::UberPoolScenePrewarmer>(get_class());
        }
    } // namespace UberPoolScenePrewarmer
} // namespace app::classes::types
