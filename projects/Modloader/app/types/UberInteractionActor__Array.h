#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace UberInteractionActor__Array {
        namespace {
            inline app::UberInteractionActor__Array__Class* type_info_ref = nullptr;
        }
        inline app::UberInteractionActor__Array__Class** type_info = &type_info_ref;
        inline app::UberInteractionActor__Array__Class* get_class() {
            return il2cpp::get_class<app::UberInteractionActor__Array__Class>(type_info, "", "UberInteractionActor[]");
        }
        inline app::UberInteractionActor__Array* create() {
            return il2cpp::create_object<app::UberInteractionActor__Array>(get_class());
        }
    } // namespace UberInteractionActor__Array
} // namespace app::classes::types
