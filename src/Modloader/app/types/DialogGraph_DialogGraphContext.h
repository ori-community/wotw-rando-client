#pragma once
#include <Modloader/app/structs/DialogGraph_DialogGraphContext.h>
#include <Modloader/app/structs/DialogGraph_DialogGraphContext__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace DialogGraph_DialogGraphContext {
        inline app::DialogGraph_DialogGraphContext__Class** type_info() {
            static app::DialogGraph_DialogGraphContext__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::DialogGraph_DialogGraphContext__Class**)(modloader::win::memory::resolve_rva(0x0470CB70));
            }
            return cache;
        }
        inline app::DialogGraph_DialogGraphContext__Class* get_class() {
            return il2cpp::get_nested_class<app::DialogGraph_DialogGraphContext__Class>(type_info(), "", "DialogGraph", "DialogGraphContext");
        }
        inline app::DialogGraph_DialogGraphContext* create() {
            return il2cpp::create_object<app::DialogGraph_DialogGraphContext>(get_class());
        }
    } // namespace DialogGraph_DialogGraphContext
} // namespace app::classes::types
