#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/PositionStateModifier__Class.h>
#include <Modloader/app/structs/PositionStateModifier.h>

namespace app::classes::types {
    namespace PositionStateModifier {
        namespace {
            inline app::PositionStateModifier__Class* type_info_ref = nullptr;
        }
        inline app::PositionStateModifier__Class** type_info = &type_info_ref;
        inline app::PositionStateModifier__Class* get_class() {
            return il2cpp::get_class<app::PositionStateModifier__Class>(type_info, "", "PositionStateModifier");
        }
        inline app::PositionStateModifier* create() {
            return il2cpp::create_object<app::PositionStateModifier>(get_class());
        }
    } // namespace PositionStateModifier
} // namespace app::classes::types
