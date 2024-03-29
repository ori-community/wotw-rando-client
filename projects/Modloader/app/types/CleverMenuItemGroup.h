#pragma once
#include <Modloader/app/structs/CleverMenuItemGroup.h>
#include <Modloader/app/structs/CleverMenuItemGroup__Array.h>
#include <Modloader/app/structs/CleverMenuItemGroup__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace CleverMenuItemGroup {
        inline app::CleverMenuItemGroup__Class** type_info() {
            static app::CleverMenuItemGroup__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::CleverMenuItemGroup__Class**)(modloader::win::memory::resolve_rva(0x04738A10));
            }
            return cache;
        }
        inline app::CleverMenuItemGroup__Class* get_class() {
            return il2cpp::get_class<app::CleverMenuItemGroup__Class>(type_info(), "", "CleverMenuItemGroup");
        }
        inline app::CleverMenuItemGroup* create() {
            return il2cpp::create_object<app::CleverMenuItemGroup>(get_class());
        }
        inline app::CleverMenuItemGroup__Array* create_array(int size) {
            return il2cpp::array_new<app::CleverMenuItemGroup__Array>(get_class(), size);
        }
        inline app::CleverMenuItemGroup__Array* create_array(const std::vector<app::CleverMenuItemGroup*>& items) {
            return il2cpp::array_new<app::CleverMenuItemGroup__Array>(get_class(), items);
        }
    } // namespace CleverMenuItemGroup
} // namespace app::classes::types
