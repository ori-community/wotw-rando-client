#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/InteractionToggler__Class.h>
#include <Modloader/app/structs/InteractionToggler.h>

namespace app::classes::types {
    namespace InteractionToggler {
        namespace {
            inline app::InteractionToggler__Class* type_info_ref = nullptr;
        }
        inline app::InteractionToggler__Class** type_info = &type_info_ref;
        inline app::InteractionToggler__Class* get_class() {
            return il2cpp::get_class<app::InteractionToggler__Class>(type_info, "", "InteractionToggler");
        }
        inline app::InteractionToggler* create() {
            return il2cpp::create_object<app::InteractionToggler>(get_class());
        }
    } // namespace InteractionToggler
} // namespace app::classes::types
