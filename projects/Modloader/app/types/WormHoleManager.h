#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/WormHoleManager__Class.h>
#include <Modloader/app/structs/WormHoleManager.h>

namespace app::classes::types {
    namespace WormHoleManager {
        namespace {
            inline app::WormHoleManager__Class* type_info_ref = nullptr;
        }
        inline app::WormHoleManager__Class** type_info = &type_info_ref;
        inline app::WormHoleManager__Class* get_class() {
            return il2cpp::get_class<app::WormHoleManager__Class>(type_info, "", "WormHoleManager");
        }
        inline app::WormHoleManager* create() {
            return il2cpp::create_object<app::WormHoleManager>(get_class());
        }
    } // namespace WormHoleManager
} // namespace app::classes::types
