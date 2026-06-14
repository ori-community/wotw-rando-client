#pragma once
#include <Modloader/app/structs/LightDelegateCreator.h>
#include <Modloader/app/structs/LightDelegateCreator__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace LightDelegateCreator {
        inline app::LightDelegateCreator__Class** type_info() {
            static app::LightDelegateCreator__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::LightDelegateCreator__Class**)(modloader::win::memory::resolve_rva(0x04735408));
            }
            return cache;
        }
        inline app::LightDelegateCreator__Class* get_class() {
            return il2cpp::get_class<app::LightDelegateCreator__Class>(type_info(), "System.Linq.Expressions.Interpreter", "LightDelegateCreator");
        }
        inline app::LightDelegateCreator* create() {
            return il2cpp::create_object<app::LightDelegateCreator>(get_class());
        }
    } // namespace LightDelegateCreator
} // namespace app::classes::types
