#pragma once
#include <Modloader/app/structs/CleverMenuItemGroupBase_c.h>
#include <Modloader/app/structs/CleverMenuItemGroupBase_c__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace CleverMenuItemGroupBase_c {
        inline app::CleverMenuItemGroupBase_c__Class** type_info() {
            static app::CleverMenuItemGroupBase_c__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::CleverMenuItemGroupBase_c__Class**)(modloader::win::memory::resolve_rva(0x04753968));
            }
            return cache;
        }
        inline app::CleverMenuItemGroupBase_c__Class* get_class() {
            return il2cpp::get_nested_class<app::CleverMenuItemGroupBase_c__Class>(type_info(), "", "CleverMenuItemGroupBase", "<>c");
        }
        inline app::CleverMenuItemGroupBase_c* create() {
            return il2cpp::create_object<app::CleverMenuItemGroupBase_c>(get_class());
        }
    } // namespace CleverMenuItemGroupBase_c
} // namespace app::classes::types
