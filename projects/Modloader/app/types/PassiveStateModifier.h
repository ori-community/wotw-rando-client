#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/PassiveStateModifier__Class.h>
#include <Modloader/app/structs/PassiveStateModifier.h>

namespace app::classes::types {
    namespace PassiveStateModifier {
        namespace {
            inline app::PassiveStateModifier__Class* type_info_ref = nullptr;
        }
        inline app::PassiveStateModifier__Class** type_info = &type_info_ref;
        inline app::PassiveStateModifier__Class* get_class() {
            return il2cpp::get_class<app::PassiveStateModifier__Class>(type_info, "", "PassiveStateModifier");
        }
        inline app::PassiveStateModifier* create() {
            return il2cpp::create_object<app::PassiveStateModifier>(get_class());
        }
    } // namespace PassiveStateModifier
} // namespace app::classes::types
