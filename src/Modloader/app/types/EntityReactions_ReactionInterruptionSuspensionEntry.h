#pragma once
#include <Modloader/app/structs/EntityReactions_ReactionInterruptionSuspensionEntry.h>
#include <Modloader/app/structs/EntityReactions_ReactionInterruptionSuspensionEntry__Array.h>
#include <Modloader/app/structs/EntityReactions_ReactionInterruptionSuspensionEntry__Boxed.h>
#include <Modloader/app/structs/EntityReactions_ReactionInterruptionSuspensionEntry__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace EntityReactions_ReactionInterruptionSuspensionEntry {
        inline app::EntityReactions_ReactionInterruptionSuspensionEntry__Class** type_info() {
            static app::EntityReactions_ReactionInterruptionSuspensionEntry__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::EntityReactions_ReactionInterruptionSuspensionEntry__Class**)(modloader::win::memory::resolve_rva(0x04762468));
            }
            return cache;
        }
        inline app::EntityReactions_ReactionInterruptionSuspensionEntry__Class* get_class() {
            return il2cpp::get_nested_class<app::EntityReactions_ReactionInterruptionSuspensionEntry__Class>(type_info(), "", "EntityReactions", "ReactionInterruptionSuspensionEntry");
        }
        inline app::EntityReactions_ReactionInterruptionSuspensionEntry* create() {
            return il2cpp::create_object<app::EntityReactions_ReactionInterruptionSuspensionEntry>(get_class());
        }
        inline app::EntityReactions_ReactionInterruptionSuspensionEntry__Boxed* box(app::EntityReactions_ReactionInterruptionSuspensionEntry value) {
            return il2cpp::box_value<app::EntityReactions_ReactionInterruptionSuspensionEntry__Boxed>(get_class(), value);
        }
        inline app::EntityReactions_ReactionInterruptionSuspensionEntry__Array* create_array(int size) {
            return il2cpp::array_new<app::EntityReactions_ReactionInterruptionSuspensionEntry__Array>(get_class(), size);
        }
        inline app::EntityReactions_ReactionInterruptionSuspensionEntry__Array* create_array(const std::vector<app::EntityReactions_ReactionInterruptionSuspensionEntry>& items) {
            return il2cpp::array_new<app::EntityReactions_ReactionInterruptionSuspensionEntry__Array>(get_class(), items);
        }
    } // namespace EntityReactions_ReactionInterruptionSuspensionEntry
} // namespace app::classes::types
