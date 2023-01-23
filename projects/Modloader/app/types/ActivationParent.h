#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/ActivationParent__Class.h>
#include <Modloader/app/structs/ActivationParent.h>

namespace app::classes::types {
    namespace ActivationParent {
        inline app::ActivationParent__Class** type_info = (app::ActivationParent__Class**)(modloader::win::memory::resolve_rva(0x0470A558));
        inline app::ActivationParent__Class* get_class() {
            return il2cpp::get_class<app::ActivationParent__Class>(type_info, "", "ActivationParent");
        }
        inline app::ActivationParent* create() {
            return il2cpp::create_object<app::ActivationParent>(get_class());
        }
    } // namespace ActivationParent
} // namespace app::classes::types
