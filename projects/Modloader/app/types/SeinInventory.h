#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/SeinInventory__Class.h>
#include <Modloader/app/structs/SeinInventory.h>

namespace app::classes::types {
    namespace SeinInventory {
        namespace {
            inline app::SeinInventory__Class* type_info_ref = nullptr;
        }
        inline app::SeinInventory__Class** type_info = &type_info_ref;
        inline app::SeinInventory__Class* get_class() {
            return il2cpp::get_class<app::SeinInventory__Class>(type_info, "", "SeinInventory");
        }
        inline app::SeinInventory* create() {
            return il2cpp::create_object<app::SeinInventory>(get_class());
        }
    } // namespace SeinInventory
} // namespace app::classes::types
