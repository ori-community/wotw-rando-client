#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace StatisticianInteractionBehaviour {
        namespace {
            app::StatisticianInteractionBehaviour__Class* type_info_ref = nullptr;
        }
        app::StatisticianInteractionBehaviour__Class** type_info = &type_info_ref;
        inline app::StatisticianInteractionBehaviour__Class* get_class() {
            return il2cpp::get_class<app::StatisticianInteractionBehaviour__Class>(type_info, "", "StatisticianInteractionBehaviour");
        }
        inline app::StatisticianInteractionBehaviour* create() {
            return il2cpp::create_object<app::StatisticianInteractionBehaviour>(get_class());
        }
    } // namespace StatisticianInteractionBehaviour
} // namespace app::classes::types
