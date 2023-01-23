#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/SplitTurnAnimation__Array__Class.h>
#include <Modloader/app/structs/SplitTurnAnimation__Array.h>

namespace app::classes::types {
    namespace SplitTurnAnimation__Array {
        namespace {
            inline app::SplitTurnAnimation__Array__Class* type_info_ref = nullptr;
        }
        inline app::SplitTurnAnimation__Array__Class** type_info = &type_info_ref;
        inline app::SplitTurnAnimation__Array__Class* get_class() {
            return il2cpp::get_class<app::SplitTurnAnimation__Array__Class>(type_info, "", "SplitTurnAnimation[]");
        }
        inline app::SplitTurnAnimation__Array* create() {
            return il2cpp::create_object<app::SplitTurnAnimation__Array>(get_class());
        }
    } // namespace SplitTurnAnimation__Array
} // namespace app::classes::types
