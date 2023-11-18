#pragma once
#include <Modloader/app/structs/AwaitTaskContinuation_c.h>
#include <Modloader/app/structs/AwaitTaskContinuation_c__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace AwaitTaskContinuation_c {
        inline app::AwaitTaskContinuation_c__Class** type_info() {
            static app::AwaitTaskContinuation_c__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::AwaitTaskContinuation_c__Class**)(modloader::win::memory::resolve_rva(0x04747F70));
            }
            return cache;
        }
        inline app::AwaitTaskContinuation_c__Class* get_class() {
            return il2cpp::get_nested_class<app::AwaitTaskContinuation_c__Class>(type_info(), "System.Threading.Tasks", "AwaitTaskContinuation", "<>c");
        }
        inline app::AwaitTaskContinuation_c* create() {
            return il2cpp::create_object<app::AwaitTaskContinuation_c>(get_class());
        }
    } // namespace AwaitTaskContinuation_c
} // namespace app::classes::types
