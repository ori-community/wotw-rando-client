#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/ModularZone__Class.h>
#include <Modloader/app/structs/ModularZone.h>

namespace app::classes::types {
    namespace ModularZone {
        namespace {
            inline app::ModularZone__Class* type_info_ref = nullptr;
        }
        inline app::ModularZone__Class** type_info = &type_info_ref;
        inline app::ModularZone__Class* get_class() {
            return il2cpp::get_class<app::ModularZone__Class>(type_info, "", "ModularZone");
        }
        inline app::ModularZone* create() {
            return il2cpp::create_object<app::ModularZone>(get_class());
        }
    } // namespace ModularZone
} // namespace app::classes::types
