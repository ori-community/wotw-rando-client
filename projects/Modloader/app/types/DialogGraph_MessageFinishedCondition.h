#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace DialogGraph_MessageFinishedCondition {
        inline app::DialogGraph_MessageFinishedCondition__Class** type_info = (app::DialogGraph_MessageFinishedCondition__Class**)(modloader::win::memory::resolve_rva(0x0472AAB8));
        inline app::DialogGraph_MessageFinishedCondition__Class* get_class() {
            return il2cpp::get_nested_class<app::DialogGraph_MessageFinishedCondition__Class>(type_info, "", "DialogGraph", "MessageFinishedCondition");
        }
        inline app::DialogGraph_MessageFinishedCondition* create() {
            return il2cpp::create_object<app::DialogGraph_MessageFinishedCondition>(get_class());
        }
    } // namespace DialogGraph_MessageFinishedCondition
} // namespace app::classes::types
