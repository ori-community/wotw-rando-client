#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/StatUISlot__Class.h>
#include <Modloader/app/structs/StatUISlot.h>

namespace app::classes::types {
    namespace StatUISlot {
        namespace {
            inline app::StatUISlot__Class* type_info_ref = nullptr;
        }
        inline app::StatUISlot__Class** type_info = &type_info_ref;
        inline app::StatUISlot__Class* get_class() {
            return il2cpp::get_class<app::StatUISlot__Class>(type_info, "", "StatUISlot");
        }
        inline app::StatUISlot* create() {
            return il2cpp::create_object<app::StatUISlot>(get_class());
        }
    } // namespace StatUISlot
} // namespace app::classes::types
