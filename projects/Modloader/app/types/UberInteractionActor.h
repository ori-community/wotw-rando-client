#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/UberInteractionActor__Class.h>
#include <Modloader/app/structs/UberInteractionActor.h>
#include <Modloader/app/structs/UberInteractionActor__Array.h>

namespace app::classes::types {
    namespace UberInteractionActor {
        namespace {
            inline app::UberInteractionActor__Class* type_info_ref = nullptr;
        }
        inline app::UberInteractionActor__Class** type_info = &type_info_ref;
        inline app::UberInteractionActor__Class* get_class() {
            return il2cpp::get_class<app::UberInteractionActor__Class>(type_info, "", "UberInteractionActor");
        }
        inline app::UberInteractionActor* create() {
            return il2cpp::create_object<app::UberInteractionActor>(get_class());
        }
        inline app::UberInteractionActor__Array* create_array(int size) {
            return il2cpp::array_new<app::UberInteractionActor__Array>(get_class(), size);
        }
        inline app::UberInteractionActor__Array* create_array(const std::vector<app::UberInteractionActor*>& items) {
            return il2cpp::array_new<app::UberInteractionActor__Array>(get_class(), items);
        }
    } // namespace UberInteractionActor
} // namespace app::classes::types
