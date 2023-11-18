#pragma once
#include <Modloader/app/structs/TransitionEntry.h>
#include <Modloader/app/structs/TransitionEntry__Array.h>
#include <Modloader/app/structs/TransitionEntry__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace TransitionEntry {
        inline app::TransitionEntry__Class** type_info() {
            static app::TransitionEntry__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::TransitionEntry__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::TransitionEntry__Class* get_class() {
            return il2cpp::get_class<app::TransitionEntry__Class>(type_info(), "Moon.ComboSystem", "TransitionEntry");
        }
        inline app::TransitionEntry* create() {
            return il2cpp::create_object<app::TransitionEntry>(get_class());
        }
        inline app::TransitionEntry__Array* create_array(int size) {
            return il2cpp::array_new<app::TransitionEntry__Array>(get_class(), size);
        }
        inline app::TransitionEntry__Array* create_array(const std::vector<app::TransitionEntry*>& items) {
            return il2cpp::array_new<app::TransitionEntry__Array>(get_class(), items);
        }
    } // namespace TransitionEntry
} // namespace app::classes::types
