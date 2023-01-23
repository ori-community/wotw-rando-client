#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/FrogGroupSpawner__Class.h>
#include <Modloader/app/structs/FrogGroupSpawner.h>

namespace app::classes::types {
    namespace FrogGroupSpawner {
        namespace {
            inline app::FrogGroupSpawner__Class* type_info_ref = nullptr;
        }
        inline app::FrogGroupSpawner__Class** type_info = &type_info_ref;
        inline app::FrogGroupSpawner__Class* get_class() {
            return il2cpp::get_class<app::FrogGroupSpawner__Class>(type_info, "", "FrogGroupSpawner");
        }
        inline app::FrogGroupSpawner* create() {
            return il2cpp::create_object<app::FrogGroupSpawner>(get_class());
        }
    } // namespace FrogGroupSpawner
} // namespace app::classes::types
