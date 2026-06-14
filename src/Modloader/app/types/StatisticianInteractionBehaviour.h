#pragma once
#include <Modloader/app/structs/StatisticianInteractionBehaviour.h>
#include <Modloader/app/structs/StatisticianInteractionBehaviour__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace StatisticianInteractionBehaviour {
        inline app::StatisticianInteractionBehaviour__Class** type_info() {
            static app::StatisticianInteractionBehaviour__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::StatisticianInteractionBehaviour__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::StatisticianInteractionBehaviour__Class* get_class() {
            return il2cpp::get_class<app::StatisticianInteractionBehaviour__Class>(type_info(), "", "StatisticianInteractionBehaviour");
        }
        inline app::StatisticianInteractionBehaviour* create() {
            return il2cpp::create_object<app::StatisticianInteractionBehaviour>(get_class());
        }
    } // namespace StatisticianInteractionBehaviour
} // namespace app::classes::types
