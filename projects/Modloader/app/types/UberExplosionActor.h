#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace UberExplosionActor {
        namespace {
            inline app::UberExplosionActor__Class* type_info_ref = nullptr;
        }
        inline app::UberExplosionActor__Class** type_info = &type_info_ref;
        inline app::UberExplosionActor__Class* get_class() {
            return il2cpp::get_class<app::UberExplosionActor__Class>(type_info, "", "UberExplosionActor");
        }
        inline app::UberExplosionActor* create() {
            return il2cpp::create_object<app::UberExplosionActor>(get_class());
        }
    } // namespace UberExplosionActor
} // namespace app::classes::types
