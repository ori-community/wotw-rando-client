#pragma once
#include <Modloader/app/structs/StatisticianInteractionBehaviour_InteractionStates__Enum.h>
#include <Modloader/app/structs/StatisticianInteractionBehaviour_InteractionStates__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace StatisticianInteractionBehaviour_InteractionStates__Enum {
        inline app::StatisticianInteractionBehaviour_InteractionStates__Enum__Class** type_info() {
            static app::StatisticianInteractionBehaviour_InteractionStates__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::StatisticianInteractionBehaviour_InteractionStates__Enum__Class**)(modloader::win::memory::resolve_rva(0x0476FE68));
            }
            return cache;
        }
        inline app::StatisticianInteractionBehaviour_InteractionStates__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::StatisticianInteractionBehaviour_InteractionStates__Enum__Class>(type_info(), "", "StatisticianInteractionBehaviour", "InteractionStates");
        }
        inline app::StatisticianInteractionBehaviour_InteractionStates__Enum* create() {
            return il2cpp::create_object<app::StatisticianInteractionBehaviour_InteractionStates__Enum>(get_class());
        }
    } // namespace StatisticianInteractionBehaviour_InteractionStates__Enum
} // namespace app::classes::types
