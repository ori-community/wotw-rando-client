#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace PickUp2Handed {
        namespace {
            inline app::PickUp2Handed__Class* type_info_ref = nullptr;
        }
        inline app::PickUp2Handed__Class** type_info = &type_info_ref;
        inline app::PickUp2Handed__Class* get_class() {
            return il2cpp::get_class<app::PickUp2Handed__Class>(type_info, "RootMotion.Demos", "PickUp2Handed");
        }
        inline app::PickUp2Handed* create() {
            return il2cpp::create_object<app::PickUp2Handed>(get_class());
        }
    } // namespace PickUp2Handed
} // namespace app::classes::types
