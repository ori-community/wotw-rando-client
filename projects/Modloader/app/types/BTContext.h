#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/BTContext__Class.h>
#include <Modloader/app/structs/BTContext.h>

namespace app::classes::types {
    namespace BTContext {
        inline app::BTContext__Class** type_info = (app::BTContext__Class**)(modloader::win::memory::resolve_rva(0x04740F88));
        inline app::BTContext__Class* get_class() {
            return il2cpp::get_class<app::BTContext__Class>(type_info, "Moon.BehaviourSystem", "BTContext");
        }
        inline app::BTContext* create() {
            return il2cpp::create_object<app::BTContext>(get_class());
        }
    } // namespace BTContext
} // namespace app::classes::types
