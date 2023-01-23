#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/DropCurrentlyHeldItem__Class.h>
#include <Modloader/app/structs/DropCurrentlyHeldItem.h>

namespace app::classes::types {
    namespace DropCurrentlyHeldItem {
        namespace {
            inline app::DropCurrentlyHeldItem__Class* type_info_ref = nullptr;
        }
        inline app::DropCurrentlyHeldItem__Class** type_info = &type_info_ref;
        inline app::DropCurrentlyHeldItem__Class* get_class() {
            return il2cpp::get_class<app::DropCurrentlyHeldItem__Class>(type_info, "", "DropCurrentlyHeldItem");
        }
        inline app::DropCurrentlyHeldItem* create() {
            return il2cpp::create_object<app::DropCurrentlyHeldItem>(get_class());
        }
    } // namespace DropCurrentlyHeldItem
} // namespace app::classes::types
