#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/VerletStructureStateModifier__Class.h>
#include <Modloader/app/structs/VerletStructureStateModifier.h>

namespace app::classes::types {
    namespace VerletStructureStateModifier {
        namespace {
            inline app::VerletStructureStateModifier__Class* type_info_ref = nullptr;
        }
        inline app::VerletStructureStateModifier__Class** type_info = &type_info_ref;
        inline app::VerletStructureStateModifier__Class* get_class() {
            return il2cpp::get_class<app::VerletStructureStateModifier__Class>(type_info, "", "VerletStructureStateModifier");
        }
        inline app::VerletStructureStateModifier* create() {
            return il2cpp::create_object<app::VerletStructureStateModifier>(get_class());
        }
    } // namespace VerletStructureStateModifier
} // namespace app::classes::types
