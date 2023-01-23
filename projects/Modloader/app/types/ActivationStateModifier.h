#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/ActivationStateModifier__Class.h>
#include <Modloader/app/structs/ActivationStateModifier.h>

namespace app::classes::types {
    namespace ActivationStateModifier {
        namespace {
            inline app::ActivationStateModifier__Class* type_info_ref = nullptr;
        }
        inline app::ActivationStateModifier__Class** type_info = &type_info_ref;
        inline app::ActivationStateModifier__Class* get_class() {
            return il2cpp::get_class<app::ActivationStateModifier__Class>(type_info, "", "ActivationStateModifier");
        }
        inline app::ActivationStateModifier* create() {
            return il2cpp::create_object<app::ActivationStateModifier>(get_class());
        }
    } // namespace ActivationStateModifier
} // namespace app::classes::types
