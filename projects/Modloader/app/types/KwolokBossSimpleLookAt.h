#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/KwolokBossSimpleLookAt__Class.h>
#include <Modloader/app/structs/KwolokBossSimpleLookAt.h>

namespace app::classes::types {
    namespace KwolokBossSimpleLookAt {
        namespace {
            inline app::KwolokBossSimpleLookAt__Class* type_info_ref = nullptr;
        }
        inline app::KwolokBossSimpleLookAt__Class** type_info = &type_info_ref;
        inline app::KwolokBossSimpleLookAt__Class* get_class() {
            return il2cpp::get_class<app::KwolokBossSimpleLookAt__Class>(type_info, "", "KwolokBossSimpleLookAt");
        }
        inline app::KwolokBossSimpleLookAt* create() {
            return il2cpp::create_object<app::KwolokBossSimpleLookAt>(get_class());
        }
    } // namespace KwolokBossSimpleLookAt
} // namespace app::classes::types
