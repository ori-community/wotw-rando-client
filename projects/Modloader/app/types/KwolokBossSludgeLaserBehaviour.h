#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/KwolokBossSludgeLaserBehaviour__Class.h>
#include <Modloader/app/structs/KwolokBossSludgeLaserBehaviour.h>

namespace app::classes::types {
    namespace KwolokBossSludgeLaserBehaviour {
        namespace {
            inline app::KwolokBossSludgeLaserBehaviour__Class* type_info_ref = nullptr;
        }
        inline app::KwolokBossSludgeLaserBehaviour__Class** type_info = &type_info_ref;
        inline app::KwolokBossSludgeLaserBehaviour__Class* get_class() {
            return il2cpp::get_class<app::KwolokBossSludgeLaserBehaviour__Class>(type_info, "", "KwolokBossSludgeLaserBehaviour");
        }
        inline app::KwolokBossSludgeLaserBehaviour* create() {
            return il2cpp::create_object<app::KwolokBossSludgeLaserBehaviour>(get_class());
        }
    } // namespace KwolokBossSludgeLaserBehaviour
} // namespace app::classes::types
