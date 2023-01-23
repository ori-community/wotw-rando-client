#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/StatisticianInteractionBehaviour__Class.h>
#include <Modloader/app/structs/StatisticianInteractionBehaviour.h>

namespace app::classes::types {
    namespace StatisticianInteractionBehaviour {
        namespace {
            inline app::StatisticianInteractionBehaviour__Class* type_info_ref = nullptr;
        }
        inline app::StatisticianInteractionBehaviour__Class** type_info = &type_info_ref;
        inline app::StatisticianInteractionBehaviour__Class* get_class() {
            return il2cpp::get_class<app::StatisticianInteractionBehaviour__Class>(type_info, "", "StatisticianInteractionBehaviour");
        }
        inline app::StatisticianInteractionBehaviour* create() {
            return il2cpp::create_object<app::StatisticianInteractionBehaviour>(get_class());
        }
    } // namespace StatisticianInteractionBehaviour
} // namespace app::classes::types
