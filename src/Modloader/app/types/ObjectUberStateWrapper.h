#pragma once
#include <Modloader/app/structs/ObjectUberStateWrapper.h>
#include <Modloader/app/structs/ObjectUberStateWrapper__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ObjectUberStateWrapper {
        inline app::ObjectUberStateWrapper__Class** type_info() {
            static app::ObjectUberStateWrapper__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::ObjectUberStateWrapper__Class**)(modloader::win::memory::resolve_rva(0x047166E8));
            }
            return cache;
        }
        inline app::ObjectUberStateWrapper__Class* get_class() {
            return il2cpp::get_class<app::ObjectUberStateWrapper__Class>(type_info(), "Moon.UberStateVisualization", "ObjectUberStateWrapper");
        }
        inline app::ObjectUberStateWrapper* create() {
            return il2cpp::create_object<app::ObjectUberStateWrapper>(get_class());
        }
    } // namespace ObjectUberStateWrapper
} // namespace app::classes::types
