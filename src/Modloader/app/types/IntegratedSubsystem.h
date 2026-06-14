#pragma once
#include <Modloader/app/structs/IntegratedSubsystem.h>
#include <Modloader/app/structs/IntegratedSubsystem__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace IntegratedSubsystem {
        inline app::IntegratedSubsystem__Class** type_info() {
            static app::IntegratedSubsystem__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::IntegratedSubsystem__Class**)(modloader::win::memory::resolve_rva(0x0474CF90));
            }
            return cache;
        }
        inline app::IntegratedSubsystem__Class* get_class() {
            return il2cpp::get_class<app::IntegratedSubsystem__Class>(type_info(), "UnityEngine.Experimental", "IntegratedSubsystem");
        }
        inline app::IntegratedSubsystem* create() {
            return il2cpp::create_object<app::IntegratedSubsystem>(get_class());
        }
    } // namespace IntegratedSubsystem
} // namespace app::classes::types
