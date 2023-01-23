#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/KwolokBossButtSlamBehaviour__Class.h>
#include <Modloader/app/structs/KwolokBossButtSlamBehaviour.h>

namespace app::classes::types {
    namespace KwolokBossButtSlamBehaviour {
        namespace {
            inline app::KwolokBossButtSlamBehaviour__Class* type_info_ref = nullptr;
        }
        inline app::KwolokBossButtSlamBehaviour__Class** type_info = &type_info_ref;
        inline app::KwolokBossButtSlamBehaviour__Class* get_class() {
            return il2cpp::get_class<app::KwolokBossButtSlamBehaviour__Class>(type_info, "", "KwolokBossButtSlamBehaviour");
        }
        inline app::KwolokBossButtSlamBehaviour* create() {
            return il2cpp::create_object<app::KwolokBossButtSlamBehaviour>(get_class());
        }
    } // namespace KwolokBossButtSlamBehaviour
} // namespace app::classes::types
